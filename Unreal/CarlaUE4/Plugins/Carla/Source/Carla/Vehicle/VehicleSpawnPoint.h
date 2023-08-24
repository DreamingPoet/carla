// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Engine/TargetPoint.h"
#include "VehicleSpawnPoint.generated.h"

/// Base class for spawner locations for walkers.
UCLASS(hideCategories = (Input, Actor, Collision, Rendering, LOD, Cooking, Replication))
class CARLA_API AVehicleSpawnPoint : public ATargetPoint
{
  GENERATED_BODY()
};


/// Base class for Target locations for anything.
UCLASS(hideCategories = (Input, Actor, Collision, Rendering, LOD, Cooking, Replication))
class CARLA_API ACustomTargetPoint : public ATargetPoint
{
	GENERATED_BODY()

public:
	// Only ASCII chataters are supported!
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn))
	FString Name;
};
