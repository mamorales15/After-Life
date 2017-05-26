// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Uno.Permissions/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Permissions{

// internal abstract interface IPermissionPromise :21
// {
uInterfaceType* IPermissionPromise_typeof();

struct IPermissionPromise
{
    void(*fp_Reject)(uObject*, ::g::Uno::Exception*);
    void(*fp_Resolve)(uObject*);
    static void Reject(const uInterface& __this, ::g::Uno::Exception* e) { __this.VTable<IPermissionPromise>()->fp_Reject(__this, e); }
    static void Resolve(const uInterface& __this) { __this.VTable<IPermissionPromise>()->fp_Resolve(__this); }
};
// }

}}} // ::g::Uno::Permissions
