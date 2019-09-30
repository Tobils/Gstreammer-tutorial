#include <gst/gst.h>
#include <gio/gio.h>
#include <glib.h>

namespace client
{
    namespace mediaPlayer
    {
        class MediaPlayer
        {
            private :
                static gboolean bus_call(GstBus *bus, GstMessage *msg, gpointer data);

            public :
                bool play();
                bool pause();
                bool resume();
                bool stop();
        };   
    }
}