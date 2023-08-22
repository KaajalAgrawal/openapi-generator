/*
 * Generation info:
 *   - generator version: 6.6.1-amadeus
 *   - datetime: 2023-08-22T08:19:21.786034800Z[UTC]
 */

package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import java.io.Serializable;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

import com.fasterxml.jackson.annotation.JsonAnyGetter;
import com.fasterxml.jackson.annotation.JsonAnySetter;
import java.util.HashMap;
import java.util.Map;



@JsonTypeName("ArrayOfNumberOnly")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen")
public class ArrayOfNumberOnly  implements Serializable {
  
  
  private @Valid List<BigDecimal> arrayNumber;

  

  protected ArrayOfNumberOnly(ArrayOfNumberOnlyBuilder<?, ?> b) {
    this.arrayNumber = b.arrayNumber;
  }

  public ArrayOfNumberOnly() {
  }

  /**
   **/
  public ArrayOfNumberOnly arrayNumber(List<BigDecimal> arrayNumber) {
    this.arrayNumber = arrayNumber;
    return this;
  }

  
  
  @ApiModelProperty(value = "")
  @JsonProperty("ArrayNumber")
  public List<BigDecimal> getArrayNumber() {
    return arrayNumber;
  }

  @JsonProperty("ArrayNumber")
  public void setArrayNumber(List<BigDecimal> arrayNumber) {
    this.arrayNumber = arrayNumber;
  }

  public ArrayOfNumberOnly addArrayNumberItem(BigDecimal arrayNumberItem) {
    if (this.arrayNumber == null) {
      this.arrayNumber = new ArrayList<>();
    }

    this.arrayNumber.add(arrayNumberItem);
    return this;
  }

  public ArrayOfNumberOnly removeArrayNumberItem(BigDecimal arrayNumberItem) {
    if (arrayNumberItem != null && this.arrayNumber != null) {
      this.arrayNumber.remove(arrayNumberItem);
    }

    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ArrayOfNumberOnly arrayOfNumberOnly = (ArrayOfNumberOnly) o;
    return Objects.equals(this.arrayNumber, arrayOfNumberOnly.arrayNumber);
  }

  @Override
  public int hashCode() {
    return Objects.hash(arrayNumber);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ArrayOfNumberOnly {\n");
    
    sb.append("    arrayNumber: ").append(toIndentedString(arrayNumber)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static ArrayOfNumberOnlyBuilder<?, ?> builder() {
    return new ArrayOfNumberOnlyBuilderImpl();
  }

  private static final class ArrayOfNumberOnlyBuilderImpl extends ArrayOfNumberOnlyBuilder<ArrayOfNumberOnly, ArrayOfNumberOnlyBuilderImpl> {

    @Override
    protected ArrayOfNumberOnlyBuilderImpl self() {
      return this;
    }

    @Override
    public ArrayOfNumberOnly build() {
      return new ArrayOfNumberOnly(this);
    }
  }

  public static abstract class ArrayOfNumberOnlyBuilder<C extends ArrayOfNumberOnly, B extends ArrayOfNumberOnlyBuilder<C, B>>  {
    private List<BigDecimal> arrayNumber;
    protected abstract B self();

    public abstract C build();

    public B arrayNumber(List<BigDecimal> arrayNumber) {
      this.arrayNumber = arrayNumber;
      return self();
    }
  }

  
  private Map<String, Object> unknown = new HashMap<>();

  @JsonAnyGetter
  public Map<String, Object> getUnknown() {
    return unknown;
  }

  @JsonAnySetter
  public void addUnknown(String key, Object value) {
    unknown.put(key, value);
  }
  
}

