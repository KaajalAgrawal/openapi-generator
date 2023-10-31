/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.3-amadeus.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "HasOnlyReadOnly.h"

#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "helpers.h"

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

HasOnlyReadOnly::HasOnlyReadOnly(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}


std::string HasOnlyReadOnly::toJsonString(bool prettyJson /* = false */) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
    // workaround inspired by: https://stackoverflow.com/a/56395440
    std::regex reg("\\\"([0-9]+\\.{0,1}[0-9]*)\\\"");
    std::string result = std::regex_replace(ss.str(), reg, "$1");
    return result;
}

void HasOnlyReadOnly::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree HasOnlyReadOnly::toPropertyTree() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("bar", m_Bar);
	pt.put("foo", m_Foo);
	return pt;
}

void HasOnlyReadOnly::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Bar = pt.get("bar", "");
	m_Foo = pt.get("foo", "");
}

std::string HasOnlyReadOnly::getBar() const
{
    return m_Bar;
}

void HasOnlyReadOnly::setBar(std::string value)
{
    m_Bar = value;
}


std::string HasOnlyReadOnly::getFoo() const
{
    return m_Foo;
}

void HasOnlyReadOnly::setFoo(std::string value)
{
    m_Foo = value;
}



std::vector<HasOnlyReadOnly> createHasOnlyReadOnlyVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<HasOnlyReadOnly>();
    for (const auto& child: pt) {
        vec.emplace_back(HasOnlyReadOnly(child.second));
    }

    return vec;
}

}
}
}
}

