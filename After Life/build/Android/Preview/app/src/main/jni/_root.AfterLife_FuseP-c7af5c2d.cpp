// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AfterLife_FuseP-c7af5c2d.h>
#include <Fuse.PlaySound.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AfterLife_FusePlaySound_File_Property :30
// {
static void AfterLife_FusePlaySound_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::PlaySound_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.PlaySound*/], offsetof(::g::AfterLife_FusePlaySound_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AfterLife_FusePlaySound_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AfterLife_FusePlaySound_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AfterLife_FusePlaySound_File_Property", options);
    type->fp_build_ = AfterLife_FusePlaySound_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AfterLife_FusePlaySound_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AfterLife_FusePlaySound_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AfterLife_FusePlaySound_File_Property__Set1_fn;
    return type;
}

// public AfterLife_FusePlaySound_File_Property(Fuse.PlaySound obj, Uno.UX.Selector name) :33
void AfterLife_FusePlaySound_File_Property__ctor_3_fn(AfterLife_FusePlaySound_File_Property* __this, ::g::Fuse::PlaySound* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :35
void AfterLife_FusePlaySound_File_Property__Get1_fn(AfterLife_FusePlaySound_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    uStackFrame __("AfterLife_FusePlaySound_File_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::PlaySound*>(obj, ::TYPES[0/*Fuse.PlaySound*/]))->File(), void();
}

// public AfterLife_FusePlaySound_File_Property New(Fuse.PlaySound obj, Uno.UX.Selector name) :33
void AfterLife_FusePlaySound_File_Property__New1_fn(::g::Fuse::PlaySound* obj, ::g::Uno::UX::Selector* name, AfterLife_FusePlaySound_File_Property** __retval)
{
    *__retval = AfterLife_FusePlaySound_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :34
void AfterLife_FusePlaySound_File_Property__get_Object_fn(AfterLife_FusePlaySound_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :36
void AfterLife_FusePlaySound_File_Property__Set1_fn(AfterLife_FusePlaySound_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uStackFrame __("AfterLife_FusePlaySound_File_Property", "Set(Uno.UX.PropertyObject,Uno.UX.FileSource,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::PlaySound*>(obj, ::TYPES[0/*Fuse.PlaySound*/]))->File(v);
}

// public AfterLife_FusePlaySound_File_Property(Fuse.PlaySound obj, Uno.UX.Selector name) [instance] :33
void AfterLife_FusePlaySound_File_Property::ctor_3(::g::Fuse::PlaySound* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AfterLife_FusePlaySound_File_Property New(Fuse.PlaySound obj, Uno.UX.Selector name) [static] :33
AfterLife_FusePlaySound_File_Property* AfterLife_FusePlaySound_File_Property::New1(::g::Fuse::PlaySound* obj, ::g::Uno::UX::Selector name)
{
    AfterLife_FusePlaySound_File_Property* obj1 = (AfterLife_FusePlaySound_File_Property*)uNew(AfterLife_FusePlaySound_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
