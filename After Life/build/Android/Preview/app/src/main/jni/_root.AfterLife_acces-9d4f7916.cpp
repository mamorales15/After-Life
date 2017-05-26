// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AfterLife_acces-9d4f7916.h>
#include <_root.Song.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class AfterLife_accessor_Song_File :11
// {
// static AfterLife_accessor_Song_File() :11
static void AfterLife_accessor_Song_File__cctor__fn(uType* __type)
{
    AfterLife_accessor_Song_File::Singleton_ = AfterLife_accessor_Song_File::New1();
    AfterLife_accessor_Song_File::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
}

static void AfterLife_accessor_Song_File_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::TYPES[0] = ::g::Song_typeof();
    ::TYPES[1] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AfterLife_accessor_Song_File::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::AfterLife_accessor_Song_File::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AfterLife_accessor_Song_File_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AfterLife_accessor_Song_File);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AfterLife_accessor_Song_File", options);
    type->fp_build_ = AfterLife_accessor_Song_File_build;
    type->fp_ctor_ = (void*)AfterLife_accessor_Song_File__New1_fn;
    type->fp_cctor_ = AfterLife_accessor_Song_File__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AfterLife_accessor_Song_File__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AfterLife_accessor_Song_File__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AfterLife_accessor_Song_File__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AfterLife_accessor_Song_File__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AfterLife_accessor_Song_File__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AfterLife_accessor_Song_File() :11
void AfterLife_accessor_Song_File__ctor_1_fn(AfterLife_accessor_Song_File* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void AfterLife_accessor_Song_File__GetAsObject_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("AfterLife_accessor_Song_File", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Song*>(obj, ::TYPES[0/*Song*/]))->File(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void AfterLife_accessor_Song_File__get_Name_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AfterLife_accessor_Song_File::_name(), void();
}

// public generated AfterLife_accessor_Song_File New() :11
void AfterLife_accessor_Song_File__New1_fn(AfterLife_accessor_Song_File** __retval)
{
    *__retval = AfterLife_accessor_Song_File::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void AfterLife_accessor_Song_File__get_PropertyType_fn(AfterLife_accessor_Song_File* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Uno.UX.FileSource*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void AfterLife_accessor_Song_File__SetAsObject_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("AfterLife_accessor_Song_File", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Song*>(obj, ::TYPES[0/*Song*/]))->SetFile(uCast< ::g::Uno::UX::FileSource*>(v, ::TYPES[1/*Uno.UX.FileSource*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void AfterLife_accessor_Song_File__get_SupportsOriginSetter_fn(AfterLife_accessor_Song_File* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector AfterLife_accessor_Song_File::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> AfterLife_accessor_Song_File::Singleton_;

// public generated AfterLife_accessor_Song_File() [instance] :11
void AfterLife_accessor_Song_File::ctor_1()
{
    ctor_();
}

// public generated AfterLife_accessor_Song_File New() [static] :11
AfterLife_accessor_Song_File* AfterLife_accessor_Song_File::New1()
{
    AfterLife_accessor_Song_File* obj1 = (AfterLife_accessor_Song_File*)uNew(AfterLife_accessor_Song_File_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
