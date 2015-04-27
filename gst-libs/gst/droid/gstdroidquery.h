/*
 * gst-droid
 *
 * Copyright (C) 2015 Jolla LTD.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_DROID_QUERY_H__
#define __GST_DROID_QUERY_H__

#include <gst/gst.h>

G_BEGIN_DECLS

#define GST_DROID_VIDEO_COLOR_FORMAT_QUERY_NAME "GetDroidVideoColorFormatQuery"

GstQuery *gst_droid_query_new_video_color_format();
void gst_droid_query_set_video_color_format (GstQuery *query, gint format);
gboolean gst_droid_query_parse_video_color_format (GstQuery *query, gint *format);

G_END_DECLS

#endif /* __GST_DROID_QUERY_H__ */
