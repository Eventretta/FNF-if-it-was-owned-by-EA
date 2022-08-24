#ifndef INCLUDED_io_newgrounds_utils_RawSaveSlotList
#define INCLUDED_io_newgrounds_utils_RawSaveSlotList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(io,newgrounds,NG)
HX_DECLARE_CLASS2(io,newgrounds,NGLite)
HX_DECLARE_CLASS4(io,newgrounds,objects,events,ResultType)
HX_DECLARE_CLASS3(io,newgrounds,utils,RawSaveSlotList)

namespace io{
namespace newgrounds{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES RawSaveSlotList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RawSaveSlotList_obj OBJ_;
		RawSaveSlotList_obj();

	public:
		enum { _hx_ClassId = 0x096a474a };

		void __construct( ::io::newgrounds::NG core);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="io.newgrounds.utils.RawSaveSlotList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"io.newgrounds.utils.RawSaveSlotList"); }
		static ::hx::ObjectPtr< RawSaveSlotList_obj > __new( ::io::newgrounds::NG core);
		static ::hx::ObjectPtr< RawSaveSlotList_obj > __alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NG core);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RawSaveSlotList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RawSaveSlotList",c1,af,b6,5e); }

		static void noCallback( ::io::newgrounds::objects::events::ResultType r);
		static ::Dynamic noCallback_dyn();

		 ::io::newgrounds::NG core;
		 ::haxe::ds::IntMap map;
		void loadList(::hx::Null< bool >  loadFiles, ::Dynamic callback);
		::Dynamic loadList_dyn();

		void onSaveSlotsReceived( ::Dynamic response,bool loadFiles, ::Dynamic callback);
		::Dynamic onSaveSlotsReceived_dyn();

		void loadAllFiles( ::Dynamic callback);
		::Dynamic loadAllFiles_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		 ::Dynamic keyValueIterator();
		::Dynamic keyValueIterator_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace utils

#endif /* INCLUDED_io_newgrounds_utils_RawSaveSlotList */ 
