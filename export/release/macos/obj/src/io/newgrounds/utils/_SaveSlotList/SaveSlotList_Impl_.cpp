#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_SaveSlot
#include <io/newgrounds/objects/SaveSlot.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_RawSaveSlotList
#include <io/newgrounds/utils/RawSaveSlotList.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils__SaveSlotList_SaveSlotList_Impl_
#include <io/newgrounds/utils/_SaveSlotList/SaveSlotList_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d2d4fbf04a2adae7_18__new,"io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_","_new",0xe5056ec9,"io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_._new","io/newgrounds/utils/SaveSlotList.hx",18,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_d2d4fbf04a2adae7_24_get,"io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_","get",0xb8ba4c2e,"io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_.get","io/newgrounds/utils/SaveSlotList.hx",24,0x8b4b00ed)
namespace io{
namespace newgrounds{
namespace utils{
namespace _SaveSlotList{

void SaveSlotList_Impl__obj::__construct() { }

Dynamic SaveSlotList_Impl__obj::__CreateEmpty() { return new SaveSlotList_Impl__obj; }

void *SaveSlotList_Impl__obj::_hx_vtable = 0;

Dynamic SaveSlotList_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveSlotList_Impl__obj > _hx_result = new SaveSlotList_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SaveSlotList_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e08c61e;
}

 ::io::newgrounds::utils::RawSaveSlotList SaveSlotList_Impl__obj::_new( ::io::newgrounds::NG core){
            	HX_GC_STACKFRAME(&_hx_pos_d2d4fbf04a2adae7_18__new)
HXDLIN(  18)		 ::io::newgrounds::utils::RawSaveSlotList this1 =  ::io::newgrounds::utils::RawSaveSlotList_obj::__alloc( HX_CTX ,core);
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SaveSlotList_Impl__obj,_new,return )

 ::io::newgrounds::objects::SaveSlot SaveSlotList_Impl__obj::get( ::io::newgrounds::utils::RawSaveSlotList this1,int id){
            	HX_STACKFRAME(&_hx_pos_d2d4fbf04a2adae7_24_get)
HXDLIN(  24)		return ( ( ::io::newgrounds::objects::SaveSlot)(this1->map->get(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SaveSlotList_Impl__obj,get,return )


SaveSlotList_Impl__obj::SaveSlotList_Impl__obj()
{
}

bool SaveSlotList_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SaveSlotList_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SaveSlotList_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class SaveSlotList_Impl__obj::__mClass;

static ::String SaveSlotList_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get",96,80,4e,00),
	::String(null())
};

void SaveSlotList_Impl__obj::__register()
{
	SaveSlotList_Impl__obj _hx_dummy;
	SaveSlotList_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_",06,80,5c,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SaveSlotList_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SaveSlotList_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SaveSlotList_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveSlotList_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveSlotList_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace utils
} // end namespace _SaveSlotList
