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
*     --include="../cereal/rfc3339_string.hpp"
*
*/

#include <cereal/types/vector.hpp>
#include "../cereal/cereal_ext.hpp"
#include "../cereal/schema_enum.hpp"
#include "../cereal/schema_string.hpp"
#include "../cereal/rfc3339_string.hpp"
#include <vector>
#include "./common.hpp"

namespace lgpl3 { namespace ocpp20 { 

struct ReportChargingProfilesRequest
{
    ChargingLimitSourceEnumType chargingLimitSource;
    std::vector<ChargingProfileType> chargingProfile;
    int evseId;
    optional<int> requestId;
    optional<schema_boolean> tbc;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "chargingLimitSource", chargingLimitSource);
        cereal::nvp(archive, "chargingProfile", chargingProfile);
        cereal::nvp(archive, "evseId", evseId);
        cereal::nvp(archive, "requestId", requestId);
        cereal::nvp(archive, "tbc", tbc);
    }
};



} } 

