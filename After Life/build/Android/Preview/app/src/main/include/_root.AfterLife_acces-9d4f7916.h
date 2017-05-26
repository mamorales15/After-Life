// This file was generated based on 'build/Android/Preview/cache/ux11/After Life.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AfterLife_accessor_Song_File;}

namespace g{

// internal sealed class AfterLife_accessor_Song_File :11
// {
::g::Uno::UX::PropertyAccessor_type* AfterLife_accessor_Song_File_typeof();
void AfterLife_accessor_Song_File__ctor_1_fn(AfterLife_accessor_Song_File* __this);
void AfterLife_accessor_Song_File__GetAsObject_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void AfterLife_accessor_Song_File__get_Name_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::Selector* __retval);
void AfterLife_accessor_Song_File__New1_fn(AfterLife_accessor_Song_File** __retval);
void AfterLife_accessor_Song_File__get_PropertyType_fn(AfterLife_accessor_Song_File* __this, uType** __retval);
void AfterLife_accessor_Song_File__SetAsObject_fn(AfterLife_accessor_Song_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void AfterLife_accessor_Song_File__get_SupportsOriginSetter_fn(AfterLife_accessor_Song_File* __this, bool* __retval);

struct AfterLife_accessor_Song_File : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return AfterLife_accessor_Song_File_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return AfterLife_accessor_Song_File_typeof()->Init(), Singleton_; }

    void ctor_1();
    static AfterLife_accessor_Song_File* New1();
};
// }

} // ::g
