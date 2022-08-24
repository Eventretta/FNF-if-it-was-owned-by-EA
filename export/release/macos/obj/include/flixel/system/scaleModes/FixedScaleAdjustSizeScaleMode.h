#ifndef INCLUDED_flixel_system_scaleModes_FixedScaleAdjustSizeScaleMode
#define INCLUDED_flixel_system_scaleModes_FixedScaleAdjustSizeScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,FixedScaleAdjustSizeScaleMode)

namespace flixel{
namespace _hx_system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES FixedScaleAdjustSizeScaleMode_obj : public  ::flixel::_hx_system::scaleModes::BaseScaleMode_obj
{
	public:
		typedef  ::flixel::_hx_system::scaleModes::BaseScaleMode_obj super;
		typedef FixedScaleAdjustSizeScaleMode_obj OBJ_;
		FixedScaleAdjustSizeScaleMode_obj();

	public:
		enum { _hx_ClassId = 0x01f096b2 };

		void __construct(::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode"); }
		static ::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > __new(::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight);
		static ::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FixedScaleAdjustSizeScaleMode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FixedScaleAdjustSizeScaleMode",07,f9,49,64); }

		bool fixedWidth;
		bool fixedHeight;
		void onMeasure(int Width,int Height);

		void updateGameSize(int Width,int Height);

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_FixedScaleAdjustSizeScaleMode */ 
