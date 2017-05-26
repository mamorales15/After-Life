// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AfterLife_Song_-f9946dae.h>
#include <_root.Song.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AfterLife_Song_Label_Property :38
// {
static void AfterLife_Song_Label_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Song_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Song*/], offsetof(::g::AfterLife_Song_Label_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AfterLife_Song_Label_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AfterLife_Song_Label_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AfterLife_Song_Label_Property", options);
    type->fp_build_ = AfterLife_Song_Label_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AfterLife_Song_Label_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AfterLife_Song_Label_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AfterLife_Song_Label_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AfterLife_Song_Label_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public AfterLife_Song_Label_Property(Song obj, Uno.UX.Selector name) :41
void AfterLife_Song_Label_Property__ctor_3_fn(AfterLife_Song_Label_Property* __this, ::g::Song* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :43
void AfterLife_Song_Label_Property__Get1_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("AfterLife_Song_Label_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Song*>(obj, ::TYPES[0/*Song*/]))->Label(), void();
}

// public AfterLife_Song_Label_Property New(Song obj, Uno.UX.Selector name) :41
void AfterLife_Song_Label_Property__New1_fn(::g::Song* obj, ::g::Uno::UX::Selector* name, AfterLife_Song_Label_Property** __retval)
{
    *__retval = AfterLife_Song_Label_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :42
void AfterLife_Song_Label_Property__get_Object_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :44
void AfterLife_Song_Label_Property__Set1_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("AfterLife_Song_Label_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Song*>(obj, ::TYPES[0/*Song*/]))->SetLabel(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :45
void AfterLife_Song_Label_Property__get_SupportsOriginSetter_fn(AfterLife_Song_Label_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public AfterLife_Song_Label_Property(Song obj, Uno.UX.Selector name) [instance] :41
void AfterLife_Song_Label_Property::ctor_3(::g::Song* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AfterLife_Song_Label_Property New(Song obj, Uno.UX.Selector name) [static] :41
AfterLife_Song_Label_Property* AfterLife_Song_Label_Property::New1(::g::Song* obj, ::g::Uno::UX::Selector name)
{
    AfterLife_Song_Label_Property* obj1 = (AfterLife_Song_Label_Property*)uNew(AfterLife_Song_Label_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
