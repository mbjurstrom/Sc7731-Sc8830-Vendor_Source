LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

# LOCAL_AAPT_FLAGS := -o 

LOCAL_THEME_OVERLAY_PACKAGE := framework-res

# Specail package, its resources can't overlay any packages
# If overlayed, the CTS test must failed
LOCAL_PACKAGE_SUPPORT_OVERLAY := false

LOCAL_THEME_NAME := HelloColor
LOCAL_THEME_VALUES := theme_values.xml

include $(BUILD_THEME_PACKAGE)
