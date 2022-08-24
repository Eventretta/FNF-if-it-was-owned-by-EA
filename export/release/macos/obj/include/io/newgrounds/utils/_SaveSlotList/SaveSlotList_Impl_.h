#ifndef INCLUDED_io_newgrounds_utils__SaveSlotList_SaveSlotList_Impl_
#define INCLUDED_io_newgrounds_utils__SaveSlotList_SaveSlotList_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(io,newgrounds,NG)
HX_DECLARE_CLASS2(io,newgrounds,NGLite)
HX_DECLARE_CLASS3(io,newgrounds,objects,Object)
HX_DECLARE_CLASS3(io,newgrounds,objects,SaveSlot)
HX_DECLARE_CLASS3(io,newgrounds,utils,RawSaveSlotList)
HX_DECLARE_CLASS4(io,newgrounds,utils,_SaveSlotList,SaveSlotList_Impl_)

namespace io{
namespace newgrounds{
namespace utils{
namespace _SaveSlotList{


class HXCPP_CLASS_ATTRIBUTES SaveSlotList_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SaveSlotList_Impl__obj OBJ_;
		SaveSlotList_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7e08c61e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_"); }

		inline static ::hx::ObjectPtr< SaveSlotList_Impl__obj > __new() {
			::hx::ObjectPtr< SaveSlotList_Impl__obj > __this = new SaveSlotList_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SaveSlotList_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SaveSlotList_Impl__obj *__this = (SaveSlotList_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveSlotList_Impl__obj), false, "io.newgrounds.utils._SaveSlotList.SaveSlotList_Impl_"));
			*(void **)__this = SaveSlotList_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SaveSlotList_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SaveSlotList_Impl_",59,13,7e,0f); }

		static  ::io::newgrounds::utils::RawSaveSlotList _new( ::io::newgrounds::NG core);
		static ::Dynamic _new_dyn();

		static  ::io::newgrounds::objects::SaveSlot get( ::io::newgrounds::utils::RawSaveSlotList this1,int id);
		static ::Dynamic get_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace utils
} // end namespace _SaveSlotList

#endif /* INCLUDED_io_newgrounds_utils__SaveSlotList_SaveSlotList_Impl_ */ 
