//
//  Copyright (c) since 2014 - 2020 C++ Hot Reload SL. All rights reserved
//

#include "BlueprintsFunctions/Functions.h"

void UFunctions::Test()
{
    // Hot reload detects changes, but it isn't properly updated
    // Modify text, let hot reload recompile, and press play to see the old text still being written to log.
    UE_LOG(LogTemp, Warning, TEXT("BlueprintsFunctions::Test - 2"));   
} 
