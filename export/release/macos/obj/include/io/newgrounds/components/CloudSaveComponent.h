#ifndef INCLUDED_io_newgrounds_components_CloudSaveComponent
#define INCLUDED_io_newgrounds_components_CloudSaveComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_io_newgrounds_components_Component
#include <io/newgrounds/components/Component.h>
#endif
HX_DECLARE_CLASS2(io,newgrounds,Call)
HX_DECLARE_CLASS2(io,newgrounds,ICallable)
HX_DECLARE_CLASS2(io,newgrounds,NGLite)
HX_DECLARE_CLASS3(io,newgrounds,components,CloudSaveComponent)
HX_DECLARE_CLASS3(io,newgrounds,components,Component)

namespace io{
namespace newgrounds{
namespace components{


class HXCPP_CLASS_ATTRIBUTES CloudSaveComponent_obj : public  ::io::newgrounds::components::Component_obj
{
	public:
		typedef  ::io::newgrounds::components::Component_obj super;
		typedef CloudSaveComponent_obj OBJ_;
		CloudSaveComponent_obj();

	public:
		enum { _hx_ClassId = 0x01d757ff };

		void __construct( ::io::newgrounds::NGLite core);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="io.newgrounds.components.CloudSaveComponent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"io.newgrounds.components.CloudSaveComponent"); }
		static ::hx::ObjectPtr< CloudSaveComponent_obj > __new( ::io::newgrounds::NGLite core);
		static ::hx::ObjectPtr< CloudSaveComponent_obj > __alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NGLite core);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CloudSaveComponent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CloudSaveComponent",2b,4b,99,0b); }

		static void __boot();
		static  ::Dynamic allowNull;
		 ::io::newgrounds::Call clearSlot(int id);
		::Dynamic clearSlot_dyn();

		 ::io::newgrounds::Call loadSlot(int id);
		::Dynamic loadSlot_dyn();

		 ::io::newgrounds::Call loadSlots();
		::Dynamic loadSlots_dyn();

		 ::io::newgrounds::Call setData(::String data,int id);
		::Dynamic setData_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace components

#endif /* INCLUDED_io_newgrounds_components_CloudSaveComponent */ 
