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

SCHEMA_ENUM(GetCompositeScheduleStatusEnum,\
    Accepted,\
    Rejected);
using GetCompositeScheduleStatusEnumType=schema_enum_value<GetCompositeScheduleStatusEnum>;

struct CompositeScheduleType
{
    optional<ChargingScheduleType> chargingSchedule;
    optional<date_time> startDateTime;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "chargingSchedule", chargingSchedule);
        cereal::nvp(archive, "startDateTime", startDateTime);
    }
};

struct GetCompositeScheduleResponse
{
    int evseId;
    optional<CompositeScheduleType> schedule;
    GetCompositeScheduleStatusEnumType status;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "evseId", evseId);
        cereal::nvp(archive, "schedule", schedule);
        cereal::nvp(archive, "status", status);
    }
};



} } 

