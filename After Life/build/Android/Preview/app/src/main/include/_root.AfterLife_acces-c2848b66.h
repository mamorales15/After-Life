// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AfterLife_accessor_Song_Label;}

namespace g{

// internal sealed class AfterLife_accessor_Song_Label :1
// {
::g::Uno::UX::PropertyAccessor_type* AfterLife_accessor_Song_Label_typeof();
void AfterLife_accessor_Song_Label__ctor_1_fn(AfterLife_accessor_Song_Label* __this);
void AfterLife_accessor_Song_Label__GetAsObject_fn(AfterLife_accessor_Song_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void AfterLife_accessor_Song_Label__get_Name_fn(AfterLife_accessor_Song_Label* __this, ::g::Uno::UX::Selector* __retval);
void AfterLife_accessor_Song_Label__New1_fn(AfterLife_accessor_Song_Label** __retval);
void AfterLife_accessor_Song_Label__get_PropertyType_fn(AfterLife_accessor_Song_Label* __this, uType** __retval);
void AfterLife_accessor_Song_Label__SetAsObject_fn(AfterLife_accessor_Song_Label* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void AfterLife_accessor_Song_Label__get_SupportsOriginSetter_fn(AfterLife_accessor_Song_Label* __this, bool* __retval);

struct AfterLife_accessor_Song_Label : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return AfterLife_accessor_Song_Label_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return AfterLife_accessor_Song_Label_typeof()->Init(), Singleton_; }

    void ctor_1();
    static AfterLife_accessor_Song_Label* New1();
};
// }

} // ::g
