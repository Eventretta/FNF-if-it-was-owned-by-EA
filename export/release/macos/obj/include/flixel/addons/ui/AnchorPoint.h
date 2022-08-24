#ifndef INCLUDED_flixel_addons_ui_AnchorPoint
#define INCLUDED_flixel_addons_ui_AnchorPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6681d3195fadcae2_3_new)
HX_DECLARE_CLASS3(flixel,addons,ui,AnchorPoint)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES AnchorPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnchorPoint_obj OBJ_;
		AnchorPoint_obj();

	public:
		enum { _hx_ClassId = 0x1d6497b0 };

		void __construct(Float Offset,::String Side,::String Flush);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.AnchorPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.AnchorPoint"); }

		inline static ::hx::ObjectPtr< AnchorPoint_obj > __new(Float Offset,::String Side,::String Flush) {
			::hx::ObjectPtr< AnchorPoint_obj > __this = new AnchorPoint_obj();
			__this->__construct(Offset,Side,Flush);
			return __this;
		}

		inline static ::hx::ObjectPtr< AnchorPoint_obj > __alloc(::hx::Ctx *_hx_ctx,Float Offset,::String Side,::String Flush) {
			AnchorPoint_obj *__this = (AnchorPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnchorPoint_obj), true, "flixel.addons.ui.AnchorPoint"));
			*(void **)__this = AnchorPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6681d3195fadcae2_3_new)
HXLINE(   7)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->flush = HX_("center",d5,25,db,05);
HXLINE(   6)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->side = HX_("center",d5,25,db,05);
HXLINE(   5)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->offset = ((Float)0);
HXLINE(  11)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->offset = Offset;
HXLINE(  12)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->side = Side;
HXLINE(  13)		( ( ::flixel::addons::ui::AnchorPoint)(__this) )->flush = Flush;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnchorPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnchorPoint",7b,79,8d,1e); }

		Float offset;
		::String side;
		::String flush;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_AnchorPoint */ 
