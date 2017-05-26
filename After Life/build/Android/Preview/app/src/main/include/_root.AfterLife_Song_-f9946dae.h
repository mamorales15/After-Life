// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AfterLife_Song_Label_Property;}
namespace g{struct Song;}

namespace g{

// internal sealed class AfterLife_Song_Label_Property :38
// {
::g::Uno::UX::Property1_type* AfterLife_Song_Label_Property_typeof();
void AfterLife_Song_Label_Property__ctor_3_fn(AfterLife_Song_Label_Property* __this, ::g::Song* obj, ::g::Uno::UX::Selector* name);
void AfterLife_Song_Label_Property__Get1_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void AfterLife_Song_Label_Property__New1_fn(::g::Song* obj, ::g::Uno::UX::Selector* name, AfterLife_Song_Label_Property** __retval);
void AfterLife_Song_Label_Property__get_Object_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void AfterLife_Song_Label_Property__Set1_fn(AfterLife_Song_Label_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void AfterLife_Song_Label_Property__get_SupportsOriginSetter_fn(AfterLife_Song_Label_Property* __this, bool* __retval);

struct AfterLife_Song_Label_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Song*> _obj;

    void ctor_3(::g::Song* obj, ::g::Uno::UX::Selector name);
    static AfterLife_Song_Label_Property* New1(::g::Song* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
