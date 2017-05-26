// This file was generated based on 'After Life.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AfterLife_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class AfterLife_bundle :0
// {
// static AfterLife_bundle() :0
static void AfterLife_bundle__cctor__fn(uType* __type)
{
    AfterLife_bundle::Kick1ebd352e6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"After Life"*/]))->GetFile(::STRINGS[1/*"kick1-b349c...*/]);
}

static void AfterLife_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("After Life");
    ::STRINGS[1] = uString::Const("kick1-b349c199.wav");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::AfterLife_bundle::Kick1ebd352e6_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Kick1ebd352e6", 0));
}

uClassType* AfterLife_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("AfterLife_bundle", options);
    type->fp_build_ = AfterLife_bundle_build;
    type->fp_cctor_ = AfterLife_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> AfterLife_bundle::Kick1ebd352e6_;
// }

} // ::g
