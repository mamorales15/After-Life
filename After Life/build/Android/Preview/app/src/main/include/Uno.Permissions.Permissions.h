// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Uno.Permissions/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Permissions{struct Permissions;}}}

namespace g{
namespace Uno{
namespace Permissions{

// public static extern class Permissions :55
// {
uClassType* Permissions_typeof();
void Permissions__Failed_fn(uObject* promise);
void Permissions__Succeeded_fn(uObject* promise);

struct Permissions : uObject
{
    static void Failed(uObject* promise);
    static void Succeeded(uObject* promise);
};
// }

}}} // ::g::Uno::Permissions
