/*************************************************************************/
/*  register_types.cpp                                                   */
/*************************************************************************/

#include "register_types.h"

#include "core/object/class_db.h"
#include "core/config/engine.h"

#include "webview.h"

void initialize_webview_module_module(ModuleInitializationLevel p_level) {
	ClassDB::register_class<WebViewOverlay>();
	WebViewOverlay::init();
}

void uninitialize_webview_module_module(ModuleInitializationLevel p_level) {
	WebViewOverlay::finish();
}
