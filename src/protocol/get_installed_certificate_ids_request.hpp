#pragma once

/**
*
* This file is auto generated using this exact command:
*     ../../generator/scripts/schema-to-cpp-header2.py
*     --input-dir=../../schemas/schemas
*     --namespace=lgpl3
*     --namespace=ocpp20
*     --include=<cereal/types/vector.hpp>
*     --include="../cereal/cereal_ext.hpp"
*     --include="../cereal/schema_enum.hpp"
*     --include="../cereal/schema_string.hpp"
*     --include="../cereal/schema_array.hpp"
*     --include="../cereal/rfc3339_string.hpp"
*
*/

#include "./common.hpp"

namespace lgpl3 { namespace ocpp20 { 

struct GetInstalledCertificateIdsRequest
{
    SCHEMA_ENUM(TypeOfCertificateType,\
        V2GRootCertficate,\
        MORootCertificate,\
        CSOSubCA1,\
        CSOSubCA2,\
        CSMSRootCertificate,\
        ManufacturerRootCertificate);
    using TypeOfCertificateTypeEnum=schema_enum_value<TypeOfCertificateType>;

    TypeOfCertificateTypeEnum typeOfCertificate;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "typeOfCertificate", typeOfCertificate);
    }
};



} } 

