# NOTE: This file is auto generated by OpenAPI Generator 6.6.1-amadeus (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule OpenapiPetstore.Model.CatAllOf do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :declawed
  ]

  @type t :: %__MODULE__{
    :declawed => boolean() | nil
  }
end

defimpl Poison.Decoder, for: OpenapiPetstore.Model.CatAllOf do
  def decode(value, _options) do
    value
  end
end

