#ifndef INCLUDED_io_newgrounds_objects_SaveSlot
#define INCLUDED_io_newgrounds_objects_SaveSlot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
HX_DECLARE_CLASS2(io,newgrounds,NGLite)
HX_DECLARE_CLASS3(io,newgrounds,objects,Object)
HX_DECLARE_CLASS3(io,newgrounds,objects,SaveSlot)
HX_DECLARE_CLASS4(io,newgrounds,objects,events,ResultType)
HX_DECLARE_CLASS4(io,newgrounds,objects,events,TypedResultType)

namespace io{
namespace newgrounds{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES SaveSlot_obj : public  ::io::newgrounds::objects::Object_obj
{
	public:
		typedef  ::io::newgrounds::objects::Object_obj super;
		typedef SaveSlot_obj OBJ_;
		SaveSlot_obj();

	public:
		enum { _hx_ClassId = 0x758a96fd };

		void __construct( ::io::newgrounds::NGLite core, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="io.newgrounds.objects.SaveSlot")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"io.newgrounds.objects.SaveSlot"); }
		static ::hx::ObjectPtr< SaveSlot_obj > __new( ::io::newgrounds::NGLite core, ::Dynamic data);
		static ::hx::ObjectPtr< SaveSlot_obj > __alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NGLite core, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SaveSlot_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SaveSlot",fb,33,c1,d9); }

		::String get_datetime();
		::Dynamic get_datetime_dyn();

		int get_id();
		::Dynamic get_id_dyn();

		int get_size();
		::Dynamic get_size_dyn();

		int get_timestamp();
		::Dynamic get_timestamp_dyn();

		::String get_url();
		::Dynamic get_url_dyn();

		::String contents;
		void save(::String data, ::Dynamic callback);
		::Dynamic save_dyn();

		void clear( ::Dynamic callback);
		::Dynamic clear_dyn();

		void setContentsOnSlotFetch( ::Dynamic response,::String contents, ::Dynamic callback);
		::Dynamic setContentsOnSlotFetch_dyn();

		void load( ::Dynamic callback);
		::Dynamic load_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace objects

#endif /* INCLUDED_io_newgrounds_objects_SaveSlot */ 
