/*!
  \file   helloworld_def.c
  \brief  

  \author Sungtae Kim
  \date   Mar 3, 2014

 */

#define PURPLE_PLUGINS

#include <glib.h>

#include "notify.h"
#include "plugin.h"
#include "version.h"

static gboolean
plugin_load(PurplePlugin *plugin) {
    purple_notify_message(plugin, PURPLE_NOTIFY_MSG_INFO, "Hello World!", "This is the Hello World! plugin :)", NULL, NULL, NULL);

    return TRUE;
}

static PurplePluginInfo info = {
        PURPLE_PLUGIN_MAGIC,
        PURPLE_MAJOR_VERSION,
        PURPLE_MINOR_VERSION,
        PURPLE_PLUGIN_STANDARD,
        NULL,
        0,
        NULL,
        PURPLE_PRIORITY_DEFAULT,

        "core-hello_world",
        "Hello World!",
        "1.1"

        "Hello World Plugin",
        "Hello World!",
        "1.1",

        "Hello World Plugin",
        "Hello World Plugin",
        "My Name <pchero21@gmail.com>",
        "http://pchero21.com",

        plugin_load,
        NULL,
        NULL,

        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
};

static void init_plugin(PurplePlugin *plugin)
{

}

PURPLE_INIT_PLUGIN(hello_world, init_plugin, info)
