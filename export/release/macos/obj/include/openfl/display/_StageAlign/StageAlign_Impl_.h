#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#define INCLUDED_openfl_display__StageAlign_StageAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageAlign,StageAlign_Impl_)

namespace openfl{
namespace display{
namespace _StageAlign{


class HXCPP_CLASS_ATTRIBUTES StageAlign_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StageAlign_Impl__obj OBJ_;
		StageAlign_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7bbcf61b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageAlign.StageAlign_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._StageAlign.StageAlign_Impl_"); }

		inline static ::hx::ObjectPtr< StageAlign_Impl__obj > __new() {
			::hx::ObjectPtr< StageAlign_Impl__obj > __this = new StageAlign_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StageAlign_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StageAlign_Impl__obj *__this = (StageAlign_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StageAlign_Impl__obj), false, "openfl.display._StageAlign.StageAlign_Impl_"));
			*(void **)__this = StageAlign_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageAlign_Impl_",27,1b,3d,66); }

		static void __boot();
		static  ::Dynamic BOTTOM;
		static  ::Dynamic BOTTOM_LEFT;
		static  ::Dynamic BOTTOM_RIGHT;
		static  ::Dynamic LEFT;
		static  ::Dynamic RIGHT;
		static  ::Dynamic TOP;
		static  ::Dynamic TOP_LEFT;
		static  ::Dynamic TOP_RIGHT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageAlign

#endif /* INCLUDED_openfl_display__StageAlign_StageAlign_Impl_ */ 
