#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLDIRECTORYELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLDIRECTORYELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLDirectoryElement_class;
extern const JSFunctionSpec HTMLDirectoryElement_funcs[];
extern const JSPropertySpec HTMLDirectoryElement_props[];

struct DIR_struct {
	struct HTMLElement_struct html;
	unsigned char *compact;
};

#endif