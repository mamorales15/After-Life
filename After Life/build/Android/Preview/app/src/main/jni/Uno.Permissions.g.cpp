// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno.Object.h>
#include <Uno.Permissions.IPerm-63840be1.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Permissions{

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Uno.Permissions/1.0.11/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract interface IPermissionPromise :21
// {
uInterfaceType* IPermissionPromise_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Permissions.IPermissionPromise", 0, 0);
    return type;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Uno.Permissions/1.0.11/$.uno
// ------------------------------------------------------------------------------------------------

// public static extern class Permissions :55
// {
static void Permissions_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Permissions could not be requested or granted.");
    ::TYPES[0] = ::g::Uno::Permissions::IPermissionPromise_typeof();
}

uClassType* Permissions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions", options);
    type->fp_build_ = Permissions_build;
    return type;
}

// private static void Failed(object promise) :105
void Permissions__Failed_fn(uObject* promise)
{
    Permissions::Failed(promise);
}

// private static void Succeeded(object promise) :100
void Permissions__Succeeded_fn(uObject* promise)
{
    Permissions::Succeeded(promise);
}

// private static void Failed(object promise) [static] :105
void Permissions::Failed(uObject* promise)
{
    uStackFrame __("Uno.Permissions.Permissions", "Failed(object)");
    ::g::Uno::Permissions::IPermissionPromise::Reject(uInterface(uPtr((uObject*)promise), ::TYPES[0/*Uno.Permissions.IPermissionPromise*/]), ::g::Uno::Exception::New2(::STRINGS[0/*"Permissions...*/]));
}

// private static void Succeeded(object promise) [static] :100
void Permissions::Succeeded(uObject* promise)
{
    uStackFrame __("Uno.Permissions.Permissions", "Succeeded(object)");
    ::g::Uno::Permissions::IPermissionPromise::Resolve(uInterface(uPtr((uObject*)promise), ::TYPES[0/*Uno.Permissions.IPermissionPromise*/]));
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Uno.Permissions/1.0.11/$.uno
// ------------------------------------------------------------------------------------------------

// public struct PlatformPermission :11
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Permissions::PlatformPermission, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}
// }

}}} // ::g::Uno::Permissions
