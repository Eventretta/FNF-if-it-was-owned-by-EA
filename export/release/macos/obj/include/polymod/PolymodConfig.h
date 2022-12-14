#ifndef INCLUDED_polymod_PolymodConfig
#define INCLUDED_polymod_PolymodConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(polymod,PolymodConfig)

namespace polymod{


class HXCPP_CLASS_ATTRIBUTES PolymodConfig_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolymodConfig_obj OBJ_;
		PolymodConfig_obj();

	public:
		enum { _hx_ClassId = 0x48534066 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.PolymodConfig")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.PolymodConfig"); }

		inline static ::hx::ObjectPtr< PolymodConfig_obj > __new() {
			::hx::ObjectPtr< PolymodConfig_obj > __this = new PolymodConfig_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PolymodConfig_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PolymodConfig_obj *__this = (PolymodConfig_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolymodConfig_obj), false, "polymod.PolymodConfig"));
			*(void **)__this = PolymodConfig_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolymodConfig_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolymodConfig",38,07,a2,67); }

		static void __boot();
		static  ::Dynamic debug;
		static  ::Dynamic get_debug();
		static ::Dynamic get_debug_dyn();

		static ::String rootPath;
		static ::String get_rootPath();
		static ::Dynamic get_rootPath_dyn();

		static  ::Dynamic useNamespaceInPaths;
		static  ::Dynamic get_useNamespaceInPaths();
		static ::Dynamic get_useNamespaceInPaths_dyn();

		static ::String scriptExt;
		static ::String get_scriptExt();
		static ::Dynamic get_scriptExt_dyn();

		static ::String scriptLibrary;
		static ::String get_scriptLibrary();
		static ::Dynamic get_scriptLibrary_dyn();

		static ::String appendFolder;
		static ::String get_appendFolder();
		static ::Dynamic get_appendFolder_dyn();

		static  ::Dynamic apiVersionMatch;
		static  ::Dynamic get_apiVersionMatch();
		static ::Dynamic get_apiVersionMatch_dyn();

		static  ::Dynamic useHScriptEX;
		static  ::Dynamic get_useHScriptEX();
		static ::Dynamic get_useHScriptEX_dyn();

		static ::String mergeFolder;
		static ::String get_mergeFolder();
		static ::Dynamic get_mergeFolder_dyn();

		static ::String modPackFile;
		static ::String get_modPackFile();
		static ::Dynamic get_modPackFile_dyn();

		static ::String modMetadataFile;
		static ::String get_modMetadataFile();
		static ::Dynamic get_modMetadataFile_dyn();

		static ::String modIconFile;
		static ::String get_modIconFile();
		static ::Dynamic get_modIconFile_dyn();

		static ::Array< ::String > modIgnoreFiles;
		static ::Array< ::String > get_modIgnoreFiles();
		static ::Dynamic get_modIgnoreFiles_dyn();

};

} // end namespace polymod

#endif /* INCLUDED_polymod_PolymodConfig */ 
