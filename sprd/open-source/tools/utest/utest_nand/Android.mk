
LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE:= utest_nand
LOCAL_MODULE_TAGS:= debug
LOCAL_MODULE_PATH:= $(TARGET_OUT_OPTIONAL_EXECUTABLES)
LOCAL_SRC_FILES:= utest_nand.c
include $(BUILD_EXECUTABLE)
