#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawRectView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_DrawRectView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,DrawRectView_Impl_)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawRectView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DrawRectView_Impl__obj OBJ_;
		DrawRectView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6ee53c86 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.DrawRectView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_"); }

		inline static ::hx::ObjectPtr< DrawRectView_Impl__obj > __new() {
			::hx::ObjectPtr< DrawRectView_Impl__obj > __this = new DrawRectView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DrawRectView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DrawRectView_Impl__obj *__this = (DrawRectView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawRectView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.DrawRectView_Impl_"));
			*(void **)__this = DrawRectView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrawRectView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawRectView_Impl_",4d,d2,8e,ef); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static Float get_x( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_x_dyn();

		static Float get_y( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_y_dyn();

		static Float get_width( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_width_dyn();

		static Float get_height( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_height_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_DrawRectView_Impl_ */ 
