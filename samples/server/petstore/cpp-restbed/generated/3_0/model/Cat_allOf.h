/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.5-amadeus.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Cat_allOf.h
 *
 * 
 */

#ifndef Cat_allOf_H_
#define Cat_allOf_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Cat_allOf 
{
public:
    Cat_allOf() = default;
    explicit Cat_allOf(boost::property_tree::ptree const& pt);
    virtual ~Cat_allOf() = default;

    Cat_allOf(const Cat_allOf& other) = default; // copy constructor
    Cat_allOf(Cat_allOf&& other) noexcept = default; // move constructor

    Cat_allOf& operator=(const Cat_allOf& other) = default; // copy assignment
    Cat_allOf& operator=(Cat_allOf&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// Cat_allOf members

    /// <summary>
    /// 
    /// </summary>
    bool isDeclawed() const;
    void setDeclawed(bool value);

protected:
    bool m_Declawed = false;
};

std::vector<Cat_allOf> createCat_allOfVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<Cat_allOf>(const Cat_allOf& val) {
    return val.toPropertyTree();
}

template<>
inline Cat_allOf fromPt<Cat_allOf>(const boost::property_tree::ptree& pt) {
    Cat_allOf ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* Cat_allOf_H_ */
