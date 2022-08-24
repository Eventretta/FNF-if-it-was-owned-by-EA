#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#include <polymod/backends/LimeModLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_109_new,"polymod.backends.LimeBackend","new",0x58b914ba,"polymod.backends.LimeBackend.new","polymod/backends/LimeBackend.hx",109,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_113_init,"polymod.backends.LimeBackend","init",0x45f1c576,"polymod.backends.LimeBackend.init","polymod/backends/LimeBackend.hx",113,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_186_getModLibrary,"polymod.backends.LimeBackend","getModLibrary",0x229dc969,"polymod.backends.LimeBackend.getModLibrary","polymod/backends/LimeBackend.hx",186,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_190_destroy,"polymod.backends.LimeBackend","destroy",0x24eda654,"polymod.backends.LimeBackend.destroy","polymod/backends/LimeBackend.hx",190,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_203_exists,"polymod.backends.LimeBackend","exists",0x229a8dc2,"polymod.backends.LimeBackend.exists","polymod/backends/LimeBackend.hx",203,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_210_getBytes,"polymod.backends.LimeBackend","getBytes",0x7791cd5b,"polymod.backends.LimeBackend.getBytes","polymod/backends/LimeBackend.hx",210,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_217_getText,"polymod.backends.LimeBackend","getText",0x1fe3f5bd,"polymod.backends.LimeBackend.getText","polymod/backends/LimeBackend.hx",217,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_224_getPath,"polymod.backends.LimeBackend","getPath",0x1d3c0eb5,"polymod.backends.LimeBackend.getPath","polymod/backends/LimeBackend.hx",224,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_231_list,"polymod.backends.LimeBackend","list",0x47e9a6c4,"polymod.backends.LimeBackend.list","polymod/backends/LimeBackend.hx",231,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_242_clearCache,"polymod.backends.LimeBackend","clearCache",0x4666345b,"polymod.backends.LimeBackend.clearCache","polymod/backends/LimeBackend.hx",242,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_260_stripAssetsPrefix,"polymod.backends.LimeBackend","stripAssetsPrefix",0x0d424b47,"polymod.backends.LimeBackend.stripAssetsPrefix","polymod/backends/LimeBackend.hx",260,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_73_getDefaultAssetLibraries,"polymod.backends.LimeBackend","getDefaultAssetLibraries",0x999a899a,"polymod.backends.LimeBackend.getDefaultAssetLibraries","polymod/backends/LimeBackend.hx",73,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_95_restoreDefaultAssetLibraries,"polymod.backends.LimeBackend","restoreDefaultAssetLibraries",0xaed402e2,"polymod.backends.LimeBackend.restoreDefaultAssetLibraries","polymod/backends/LimeBackend.hx",95,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_109_new)
            	}

Dynamic LimeBackend_obj::__CreateEmpty() { return new LimeBackend_obj; }

void *LimeBackend_obj::_hx_vtable = 0;

Dynamic LimeBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeBackend_obj > _hx_result = new LimeBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LimeBackend_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a28a88e;
}

static ::polymod::backends::IBackend_obj _hx_polymod_backends_LimeBackend__hx_polymod_backends_IBackend= {
	( bool (::hx::Object::*)( ::Dynamic))&::polymod::backends::LimeBackend_obj::init,
	( void (::hx::Object::*)())&::polymod::backends::LimeBackend_obj::destroy,
	( void (::hx::Object::*)())&::polymod::backends::LimeBackend_obj::clearCache,
	( bool (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::exists,
	(  ::haxe::io::Bytes (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getBytes,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getText,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getPath,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::list,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::stripAssetsPrefix,
};

void *LimeBackend_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4ed455e0: return &_hx_polymod_backends_LimeBackend__hx_polymod_backends_IBackend;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool LimeBackend_obj::init( ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_113_init)
HXLINE( 115)		 ::haxe::ds::StringMap defaultLibraries = ::polymod::backends::LimeBackend_obj::getDefaultAssetLibraries();
HXLINE( 117)		this->modLibraries =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 119)		bool hasMoreThanDefault = false;
HXLINE( 120)		{
HXLINE( 120)			 ::Dynamic key = defaultLibraries->keys();
HXDLIN( 120)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 120)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 122)				if ((key1 != HX_("default",c1,d8,c3,9b))) {
HXLINE( 124)					hasMoreThanDefault = true;
HXLINE( 125)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (hasMoreThanDefault) {
HXLINE( 129)			_hx_tmp = ::hx::IsNull( params );
            		}
            		else {
HXLINE( 129)			_hx_tmp = false;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 131)			::polymod::Polymod_obj::error(HX_("lime_missing_asset_library_info",04,f7,5a,a0),HX_("Your Lime/OpenFL configuration is using custom asset libraries, but you have not provided any frameworkParams in Polymod.init() that tells Polymod which asset libraries to expect and what their mod sub-directory prefixes should be.",ad,23,f1,23),HX_("init",10,3b,bb,45));
HXLINE( 134)			return false;
            		}
HXLINE( 137)		bool _hx_tmp1;
HXDLIN( 137)		if (hasMoreThanDefault) {
HXLINE( 137)			_hx_tmp1 = ::hx::IsNull( params->__Field(HX_("assetLibraryPaths",43,04,19,3e),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 137)			_hx_tmp1 = false;
            		}
HXDLIN( 137)		if (_hx_tmp1) {
HXLINE( 139)			::polymod::Polymod_obj::error(HX_("lime_missing_asset_library_info",04,f7,5a,a0),HX_("Your Lime/OpenFL configuration is using custom asset libraries, but you have not provided the frameworkParams.assetLibraryPaths parameter in Polymod.init() that tells Polymod which asset libraries to expect and what their mod sub-directory prefixes should be.",10,70,c8,1a),HX_("init",10,3b,bb,45));
HXLINE( 142)			return false;
            		}
HXLINE( 146)		{
HXLINE( 146)			 ::Dynamic key1 = defaultLibraries->keys();
HXDLIN( 146)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 146)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 148)				::String pathPrefix = HX_("",00,00,00,00);
HXLINE( 149)				if (hasMoreThanDefault) {
HXLINE( 151)					bool _hx_tmp;
HXDLIN( 151)					if (!(( ( ::haxe::ds::StringMap)( ::Dynamic(params->__Field(HX_("assetLibraryPaths",43,04,19,3e),::hx::paccDynamic))) )->exists(key))) {
HXLINE( 151)						_hx_tmp = (key != HX_("default",c1,d8,c3,9b));
            					}
            					else {
HXLINE( 151)						_hx_tmp = false;
            					}
HXDLIN( 151)					if (_hx_tmp) {
HXLINE( 153)						::polymod::Polymod_obj::error(HX_("lime_missing_asset_library_reference",75,a9,dc,e7),((HX_("Your Lime/OpenFL configuration is using custom asset libraries, and you provided frameworkParams in Polymod.init(), but we couldn't find a match for this asset library: (",d0,a8,8f,c6) + key) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 157)						return false;
            					}
            					else {
HXLINE( 161)						if ((key == HX_("default",c1,d8,c3,9b))) {
HXLINE( 163)							pathPrefix = HX_("",00,00,00,00);
            						}
            						else {
HXLINE( 167)							pathPrefix = ( ( ::haxe::ds::StringMap)( ::Dynamic(params->__Field(HX_("assetLibraryPaths",43,04,19,3e),::hx::paccDynamic))) )->get_string(key);
            						}
            					}
            				}
HXLINE( 171)				 ::lime::utils::AssetLibrary fallbackLibrary = ( ( ::lime::utils::AssetLibrary)(defaultLibraries->get(key)) );
HXLINE( 172)				 ::polymod::backends::LimeModLibrary modLibrary = this->getModLibrary(fallbackLibrary,pathPrefix);
HXLINE( 173)				this->modLibraries->set(key,modLibrary);
            			}
            		}
HXLINE( 176)		{
HXLINE( 176)			 ::Dynamic key2 = this->modLibraries->keys();
HXDLIN( 176)			while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 176)				::String key = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 178)				::lime::utils::Assets_obj::registerLibrary(key,( ( ::lime::utils::AssetLibrary)(this->modLibraries->get(key)) ));
            			}
            		}
HXLINE( 181)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,init,return )

 ::polymod::backends::LimeModLibrary LimeBackend_obj::getModLibrary( ::lime::utils::AssetLibrary fallbackLibrary,::String pathPrefix){
            	HX_GC_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_186_getModLibrary)
HXDLIN( 186)		return  ::polymod::backends::LimeModLibrary_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),fallbackLibrary,pathPrefix);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LimeBackend_obj,getModLibrary,return )

void LimeBackend_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_190_destroy)
HXLINE( 191)		this->polymodLibrary = null();
HXLINE( 192)		::polymod::backends::LimeBackend_obj::restoreDefaultAssetLibraries();
HXLINE( 193)		{
HXLINE( 193)			 ::Dynamic key = this->modLibraries->keys();
HXDLIN( 193)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 193)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 195)				 ::polymod::backends::LimeModLibrary modLibrary = ( ( ::polymod::backends::LimeModLibrary)(this->modLibraries->get(key1)) );
HXLINE( 196)				modLibrary->destroy();
HXLINE( 197)				this->modLibraries->remove(key1);
            			}
            		}
HXLINE( 199)		this->modLibraries = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,destroy,(void))

bool LimeBackend_obj::exists(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_203_exists)
HXLINE( 204)		::String symbol_modId;
HXDLIN( 204)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 204)		::String id1 = id;
HXDLIN( 204)		 ::haxe::ds::StringMap libs = this->modLibraries;
HXDLIN( 204)		 ::polymod::backends::LimeModLibrary l = null();
HXDLIN( 204)		::String symbol_fallbackId = id1;
HXDLIN( 204)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 204)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 204)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 204)		if (::hx::IsNotNull( l )) {
HXLINE( 204)			symbol_library = l;
            		}
            		else {
HXLINE( 204)			if (::hx::IsNotNull( libs )) {
HXLINE( 204)				bool _hx_tmp;
HXDLIN( 204)				if ((symbol_lib != HX_("",00,00,00,00))) {
HXLINE( 204)					_hx_tmp = ::hx::IsNull( symbol_lib );
            				}
            				else {
HXLINE( 204)					_hx_tmp = true;
            				}
HXDLIN( 204)				if (_hx_tmp) {
HXLINE( 204)					symbol_lib = HX_("default",c1,d8,c3,9b);
            				}
HXDLIN( 204)				symbol_library = ( ( ::polymod::backends::LimeModLibrary)(libs->get(symbol_lib)) );
            			}
            		}
HXDLIN( 204)		bool _hx_tmp;
HXDLIN( 204)		bool _hx_tmp1;
HXDLIN( 204)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 204)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 204)			_hx_tmp1 = false;
            		}
HXDLIN( 204)		if (_hx_tmp1) {
HXLINE( 204)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 204)			_hx_tmp = false;
            		}
HXDLIN( 204)		if (_hx_tmp) {
HXLINE( 204)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 204)		symbol_modId = symbol_nakedId;
HXLINE( 205)		bool e = symbol_library->exists(symbol_modId,null());
HXLINE( 206)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,exists,return )

 ::haxe::io::Bytes LimeBackend_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_210_getBytes)
HXLINE( 211)		::String symbol_modId;
HXDLIN( 211)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 211)		::String id1 = id;
HXDLIN( 211)		 ::haxe::ds::StringMap libs = this->modLibraries;
HXDLIN( 211)		 ::polymod::backends::LimeModLibrary l = null();
HXDLIN( 211)		::String symbol_fallbackId = id1;
HXDLIN( 211)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 211)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 211)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 211)		if (::hx::IsNotNull( l )) {
HXLINE( 211)			symbol_library = l;
            		}
            		else {
HXLINE( 211)			if (::hx::IsNotNull( libs )) {
HXLINE( 211)				bool _hx_tmp;
HXDLIN( 211)				if ((symbol_lib != HX_("",00,00,00,00))) {
HXLINE( 211)					_hx_tmp = ::hx::IsNull( symbol_lib );
            				}
            				else {
HXLINE( 211)					_hx_tmp = true;
            				}
HXDLIN( 211)				if (_hx_tmp) {
HXLINE( 211)					symbol_lib = HX_("default",c1,d8,c3,9b);
            				}
HXDLIN( 211)				symbol_library = ( ( ::polymod::backends::LimeModLibrary)(libs->get(symbol_lib)) );
            			}
            		}
HXDLIN( 211)		bool _hx_tmp;
HXDLIN( 211)		bool _hx_tmp1;
HXDLIN( 211)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 211)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 211)			_hx_tmp1 = false;
            		}
HXDLIN( 211)		if (_hx_tmp1) {
HXLINE( 211)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 211)			_hx_tmp = false;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 211)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 211)		symbol_modId = symbol_nakedId;
HXLINE( 212)		 ::haxe::io::Bytes bytes = symbol_library->getBytes(symbol_modId);
HXLINE( 213)		return bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getBytes,return )

::String LimeBackend_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_217_getText)
HXLINE( 218)		::String symbol_modId;
HXDLIN( 218)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 218)		::String id1 = id;
HXDLIN( 218)		 ::haxe::ds::StringMap libs = this->modLibraries;
HXDLIN( 218)		 ::polymod::backends::LimeModLibrary l = null();
HXDLIN( 218)		::String symbol_fallbackId = id1;
HXDLIN( 218)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 218)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 218)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 218)		if (::hx::IsNotNull( l )) {
HXLINE( 218)			symbol_library = l;
            		}
            		else {
HXLINE( 218)			if (::hx::IsNotNull( libs )) {
HXLINE( 218)				bool _hx_tmp;
HXDLIN( 218)				if ((symbol_lib != HX_("",00,00,00,00))) {
HXLINE( 218)					_hx_tmp = ::hx::IsNull( symbol_lib );
            				}
            				else {
HXLINE( 218)					_hx_tmp = true;
            				}
HXDLIN( 218)				if (_hx_tmp) {
HXLINE( 218)					symbol_lib = HX_("default",c1,d8,c3,9b);
            				}
HXDLIN( 218)				symbol_library = ( ( ::polymod::backends::LimeModLibrary)(libs->get(symbol_lib)) );
            			}
            		}
HXDLIN( 218)		bool _hx_tmp;
HXDLIN( 218)		bool _hx_tmp1;
HXDLIN( 218)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 218)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 218)			_hx_tmp1 = false;
            		}
HXDLIN( 218)		if (_hx_tmp1) {
HXLINE( 218)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 218)			_hx_tmp = false;
            		}
HXDLIN( 218)		if (_hx_tmp) {
HXLINE( 218)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 218)		symbol_modId = symbol_nakedId;
HXLINE( 219)		::String text = symbol_library->getText(symbol_modId);
HXLINE( 220)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getText,return )

::String LimeBackend_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_224_getPath)
HXLINE( 225)		::String symbol_modId;
HXDLIN( 225)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 225)		::String id1 = id;
HXDLIN( 225)		 ::haxe::ds::StringMap libs = this->modLibraries;
HXDLIN( 225)		 ::polymod::backends::LimeModLibrary l = null();
HXDLIN( 225)		::String symbol_fallbackId = id1;
HXDLIN( 225)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 225)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 225)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 225)		if (::hx::IsNotNull( l )) {
HXLINE( 225)			symbol_library = l;
            		}
            		else {
HXLINE( 225)			if (::hx::IsNotNull( libs )) {
HXLINE( 225)				bool _hx_tmp;
HXDLIN( 225)				if ((symbol_lib != HX_("",00,00,00,00))) {
HXLINE( 225)					_hx_tmp = ::hx::IsNull( symbol_lib );
            				}
            				else {
HXLINE( 225)					_hx_tmp = true;
            				}
HXDLIN( 225)				if (_hx_tmp) {
HXLINE( 225)					symbol_lib = HX_("default",c1,d8,c3,9b);
            				}
HXDLIN( 225)				symbol_library = ( ( ::polymod::backends::LimeModLibrary)(libs->get(symbol_lib)) );
            			}
            		}
HXDLIN( 225)		bool _hx_tmp;
HXDLIN( 225)		bool _hx_tmp1;
HXDLIN( 225)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 225)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 225)			_hx_tmp1 = false;
            		}
HXDLIN( 225)		if (_hx_tmp1) {
HXLINE( 225)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 225)			_hx_tmp = false;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 225)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 225)		symbol_modId = symbol_nakedId;
HXLINE( 226)		::String path = symbol_library->getPath(symbol_modId);
HXLINE( 227)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getPath,return )

::Array< ::String > LimeBackend_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_231_list)
HXLINE( 232)		::Array< ::String > arr = ::Array_obj< ::String >::__new(0);
HXLINE( 233)		{
HXLINE( 233)			 ::Dynamic modLibrary = this->modLibraries->iterator();
HXDLIN( 233)			while(( (bool)(modLibrary->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 233)				 ::polymod::backends::LimeModLibrary modLibrary1 = ( ( ::polymod::backends::LimeModLibrary)(modLibrary->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 235)				::String arr1;
HXDLIN( 235)				if (::hx::IsNull( type )) {
HXLINE( 235)					arr1 = null();
            				}
            				else {
HXLINE( 235)					arr1 = ::polymod::backends::LimeModLibrary_obj::PolyToLime(type);
            				}
HXDLIN( 235)				arr = arr->concat(modLibrary1->list(arr1));
            			}
            		}
HXLINE( 237)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,list,return )

void LimeBackend_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_242_clearCache)
HXDLIN( 242)		if (::hx::IsNotNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibraries )) {
HXLINE( 244)			{
HXLINE( 244)				 ::Dynamic key = ::lime::utils::Assets_obj::cache->audio->keys();
HXDLIN( 244)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 244)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 246)					::lime::utils::Assets_obj::cache->audio->remove(key1);
            				}
            			}
HXLINE( 248)			{
HXLINE( 248)				 ::Dynamic key1 = ::lime::utils::Assets_obj::cache->font->keys();
HXDLIN( 248)				while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 248)					::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 250)					::lime::utils::Assets_obj::cache->font->remove(key);
            				}
            			}
HXLINE( 252)			{
HXLINE( 252)				 ::Dynamic key2 = ::lime::utils::Assets_obj::cache->image->keys();
HXDLIN( 252)				while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 252)					::String key = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 254)					::lime::utils::Assets_obj::cache->image->remove(key);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,clearCache,(void))

::String LimeBackend_obj::stripAssetsPrefix(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_260_stripAssetsPrefix)
HXLINE( 261)		if ((::polymod::util::Util_obj::uIndexOf(id,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 263)			id = ::polymod::util::Util_obj::uSubstring(id,7,null());
            		}
HXLINE( 265)		return id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,stripAssetsPrefix,return )

 ::haxe::ds::StringMap LimeBackend_obj::defaultAssetLibraries;

 ::haxe::ds::StringMap LimeBackend_obj::getDefaultAssetLibraries(){
            	HX_GC_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_73_getDefaultAssetLibraries)
HXLINE(  74)		if (::hx::IsNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibraries )) {
HXLINE(  76)			::polymod::backends::LimeBackend_obj::defaultAssetLibraries =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  79)			 ::haxe::ds::StringMap libraries = ::lime::utils::Assets_obj::libraries;
HXLINE(  82)			{
HXLINE(  82)				 ::Dynamic key = libraries->keys();
HXDLIN(  82)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  82)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  84)					{
HXLINE(  84)						::Dynamic this1 = ::polymod::backends::LimeBackend_obj::defaultAssetLibraries;
HXDLIN(  84)						( ( ::haxe::ds::StringMap)(this1) )->set(key1,::lime::utils::Assets_obj::getLibrary(key1));
            					}
            				}
            			}
            		}
HXLINE(  87)		return ::polymod::backends::LimeBackend_obj::defaultAssetLibraries;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,getDefaultAssetLibraries,return )

void LimeBackend_obj::restoreDefaultAssetLibraries(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_95_restoreDefaultAssetLibraries)
HXDLIN(  95)		if (::hx::IsNotNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibraries )) {
HXLINE(  97)			 ::Dynamic key = ::polymod::backends::LimeBackend_obj::defaultAssetLibraries->keys();
HXDLIN(  97)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  97)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  99)				::lime::utils::Assets_obj::registerLibrary(key1,( ( ::lime::utils::AssetLibrary)(::polymod::backends::LimeBackend_obj::defaultAssetLibraries->get(key1)) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,restoreDefaultAssetLibraries,(void))


::hx::ObjectPtr< LimeBackend_obj > LimeBackend_obj::__new() {
	::hx::ObjectPtr< LimeBackend_obj > __this = new LimeBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LimeBackend_obj > LimeBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LimeBackend_obj *__this = (LimeBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeBackend_obj), true, "polymod.backends.LimeBackend"));
	*(void **)__this = LimeBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LimeBackend_obj::LimeBackend_obj()
{
}

void LimeBackend_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeBackend);
	HX_MARK_MEMBER_NAME(polymodLibrary,"polymodLibrary");
	HX_MARK_MEMBER_NAME(modLibraries,"modLibraries");
	HX_MARK_END_CLASS();
}

void LimeBackend_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(polymodLibrary,"polymodLibrary");
	HX_VISIT_MEMBER_NAME(modLibraries,"modLibraries");
}

::hx::Val LimeBackend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"modLibraries") ) { return ::hx::Val( modLibraries ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getModLibrary") ) { return ::hx::Val( getModLibrary_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { return ::hx::Val( polymodLibrary ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stripAssetsPrefix") ) { return ::hx::Val( stripAssetsPrefix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeBackend_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"defaultAssetLibraries") ) { outValue = ( defaultAssetLibraries ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultAssetLibraries") ) { outValue = getDefaultAssetLibraries_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"restoreDefaultAssetLibraries") ) { outValue = restoreDefaultAssetLibraries_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeBackend_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"modLibraries") ) { modLibraries=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { polymodLibrary=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LimeBackend_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"defaultAssetLibraries") ) { defaultAssetLibraries=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void LimeBackend_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("polymodLibrary",a5,49,05,cb));
	outFields->push(HX_("modLibraries",f7,30,d4,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeBackend_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeBackend_obj,polymodLibrary),HX_("polymodLibrary",a5,49,05,cb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LimeBackend_obj,modLibraries),HX_("modLibraries",f7,30,d4,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LimeBackend_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &LimeBackend_obj::defaultAssetLibraries,HX_("defaultAssetLibraries",aa,e4,43,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LimeBackend_obj_sMemberFields[] = {
	HX_("polymodLibrary",a5,49,05,cb),
	HX_("modLibraries",f7,30,d4,b6),
	HX_("init",10,3b,bb,45),
	HX_("getModLibrary",8f,d0,49,17),
	HX_("destroy",fa,2c,86,24),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("clearCache",75,d9,1e,16),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	::String(null()) };

static void LimeBackend_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LimeBackend_obj::defaultAssetLibraries,"defaultAssetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LimeBackend_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LimeBackend_obj::defaultAssetLibraries,"defaultAssetLibraries");
};

#endif

::hx::Class LimeBackend_obj::__mClass;

static ::String LimeBackend_obj_sStaticFields[] = {
	HX_("defaultAssetLibraries",aa,e4,43,2c),
	HX_("getDefaultAssetLibraries",34,28,d8,ca),
	HX_("restoreDefaultAssetLibraries",7c,f6,ed,bd),
	::String(null())
};

void LimeBackend_obj::__register()
{
	LimeBackend_obj _hx_dummy;
	LimeBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeBackend",c8,ef,b5,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeBackend_obj::__GetStatic;
	__mClass->mSetStaticField = &LimeBackend_obj::__SetStatic;
	__mClass->mMarkFunc = LimeBackend_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeBackend_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeBackend_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LimeBackend_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
