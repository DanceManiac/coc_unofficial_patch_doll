#pragma once

namespace GameObject
{
enum ECallbackType
{
    eTradeStart = u32(0),
    eTradeStop,
    eTradeSellBuyItem,
    eTradePerformTradeOperation,

    eZoneEnter,
    eZoneExit,
    eExitLevelBorder,
    eEnterLevelBorder,
    eDeath,

    ePatrolPathInPoint,

    eInventoryPda,
    eInventoryInfo,
    eArticleInfo,
    eTaskStateChange,
    eMapLocationAdded,

    eUseObject,

    eHit,

    eSound,

    eActionTypeMovement,
    eActionTypeWatch,
    eActionTypeRemoved,
    eActionTypeAnimation,
    eActionTypeSound,
    eActionTypeParticle,
    eActionTypeObject,

    eActorSleep,

    eHelicopterOnPoint,
    eHelicopterOnHit,

    eOnItemTake,
    eOnItemDrop,

    eScriptAnimation,

    eTraderGlobalAnimationRequest,
    eTraderHeadAnimationRequest,
    eTraderSoundEnd,

    eInvBoxItemTake,
    eWeaponNoAmmoAvailable,

    //Alundaio: added defines
    eActorHudAnimationEnd,
    //AVO: custom callbacks
    // Input
    eKeyPress,
    eKeyRelease,
    eKeyHold,
    eMouseMove,
    eMouseWheel,
    // Inventory
    eItemToBelt,
    eItemToSlot,
    eItemToRuck,
    // Actor
    eActorBeforeDeath,
    eOnFootStep,
    //-AVO

    // vehicle
    eAttachVehicle,
    eDetachVehicle,
    eUseVehicle,

    // weapon
    eOnWeaponZoomIn,
    eOnWeaponZoomOut,
    eOnWeaponJammed,
    eOnWeaponFired,
    eOnWeaponMagazineEmpty,

    eDummy = u32(-1),
};
};
