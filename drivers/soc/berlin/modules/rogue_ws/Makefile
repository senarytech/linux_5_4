TEE_INC_PATH += -I$(srctree)/drivers/soc/berlin/modules/tzd/tee/client_api \
				 -I$(srctree)/drivers/soc/berlin/modules/tzd/tee/common \
				 -I$(srctree)/drivers/soc/berlin/modules/tzd/tz/common \
				 -I$(srctree)/drivers/soc/berlin/modules/tzd/include \
				 -I$(srctree)/drivers/soc/berlin/modules/tzd

ccflags-$(CONFIG_POWERVR_ROGUE_WS:m=y) += -I$(srctree)/drivers/soc/berlin/modules/rogue_ws/include/
ccflags-$(CONFIG_POWERVR_ROGUE_WS:m=y) += $(TEE_INC_PATH)
ccflags-y += -Werror

ifeq ($(CONFIG_GPU_VS680),y)
ccflags-$(CONFIG_POWERVR_ROGUE_WS:m=y) += -include $(srctree)/drivers/soc/berlin/modules/rogue_ws/vs680_config_kernel.h
else ifeq ($(CONFIG_GPU_VS640),y)
ccflags-$(CONFIG_POWERVR_ROGUE_WS:m=y) += -include $(srctree)/drivers/soc/berlin/modules/rogue_ws/vs640_config_kernel.h
endif

obj-$(CONFIG_POWERVR_ROGUE_WS) += pvrsrvkm.o

pvrsrvkm-y += src/allocmem.o
pvrsrvkm-y += src/cache_km.o
pvrsrvkm-y += src/client_cache_direct_bridge.o
pvrsrvkm-y += src/client_devicememhistory_direct_bridge.o
pvrsrvkm-y += src/client_htbuffer_direct_bridge.o
pvrsrvkm-y += src/client_mm_direct_bridge.o
pvrsrvkm-y += src/client_pvrtl_direct_bridge.o
pvrsrvkm-y += src/client_sync_direct_bridge.o
pvrsrvkm-y += src/client_synctracking_direct_bridge.o
pvrsrvkm-y += src/connection_server.o
pvrsrvkm-y += src/devicemem.o
pvrsrvkm-y += src/devicemem_heapcfg.o
pvrsrvkm-y += src/devicemem_history_server.o
pvrsrvkm-y += src/devicemem_server.o
pvrsrvkm-y += src/devicemem_utils.o
pvrsrvkm-y += src/dma_support.o
pvrsrvkm-y += src/event.o
pvrsrvkm-y += src/handle.o
pvrsrvkm-y += src/handle_idr.o
pvrsrvkm-y += src/hash.o
pvrsrvkm-y += src/htb_debug.o
pvrsrvkm-y += src/htbserver.o
pvrsrvkm-y += src/htbuffer.o
pvrsrvkm-y += src/info_page_km.o
pvrsrvkm-y += src/interrupt_support.o
pvrsrvkm-y += src/km_apphint.o
pvrsrvkm-y += src/lists.o
pvrsrvkm-y += src/mem_utils.o
pvrsrvkm-y += src/mmu_common.o
pvrsrvkm-y += src/module_common.o
pvrsrvkm-y += src/osconnection_server.o
pvrsrvkm-y += src/osfunc_arm64.o
pvrsrvkm-y += src/osfunc.o
pvrsrvkm-y += src/osmmap_stub.o
pvrsrvkm-y += src/physheap.o
pvrsrvkm-y += src/physmem.o
pvrsrvkm-y += src/physmem_dmabuf.o
pvrsrvkm-y += src/physmem_hostmem.o
pvrsrvkm-y += src/physmem_lma.o
pvrsrvkm-y += src/physmem_osmem_linux.o
pvrsrvkm-y += src/physmem_test.o
pvrsrvkm-y += src/pmr.o
pvrsrvkm-y += src/pmr_os.o
pvrsrvkm-y += src/power.o
pvrsrvkm-y += src/process_stats.o
pvrsrvkm-y += src/pvr_bridge_k.o
pvrsrvkm-y += src/pvr_counting_timeline.o
pvrsrvkm-y += src/pvr_debug.o
pvrsrvkm-y += src/pvr_drm.o
pvrsrvkm-y += src/pvr_fence.o
pvrsrvkm-y += src/pvr_gputrace.o
pvrsrvkm-y += src/pvr_notifier.o
pvrsrvkm-y += src/pvr_platform_drv.o
pvrsrvkm-y += src/pvrsrv_bridge_init.o
pvrsrvkm-y += src/pvrsrv.o
pvrsrvkm-y += src/pvrsrv_error.o
pvrsrvkm-y += src/pvrsrv_pool.o
pvrsrvkm-y += src/pvr_sw_fence.o
pvrsrvkm-y += src/pvr_sync_file.o
pvrsrvkm-y += src/ra.o
pvrsrvkm-y += src/rgxbreakpoint.o
pvrsrvkm-y += src/rgxbvnc.o
pvrsrvkm-y += src/rgxccb.o
pvrsrvkm-y += src/rgxcompute.o
pvrsrvkm-y += src/rgxdebug.o
pvrsrvkm-y += src/rgxfwdbg.o
pvrsrvkm-y += src/rgxfwimageutils.o
pvrsrvkm-y += src/rgxfwutils.o
pvrsrvkm-y += src/rgxhwperf.o
pvrsrvkm-y += src/rgx_hwperf_table.o
pvrsrvkm-y += src/rgxinit.o
pvrsrvkm-y += src/rgxkicksync.o
pvrsrvkm-y += src/rgxlayer_impl.o
pvrsrvkm-y += src/rgxmem.o
pvrsrvkm-y += src/rgxmipsmmuinit.o
pvrsrvkm-y += src/rgxmmuinit.o
pvrsrvkm-y += src/rgxpower.o
pvrsrvkm-y += src/rgxregconfig.o
pvrsrvkm-y += src/rgxsignals.o
pvrsrvkm-y += src/rgxsrvinit.o
pvrsrvkm-y += src/rgxstartstop.o
pvrsrvkm-y += src/rgxsyncutils.o
pvrsrvkm-y += src/rgxta3d.o
pvrsrvkm-y += src/rgxtdmtransfer.o
pvrsrvkm-y += src/rgxtimecorr.o
pvrsrvkm-y += src/rgxtransfer.o
pvrsrvkm-y += src/rgxutils.o
pvrsrvkm-y += src/server_cache_bridge.o
pvrsrvkm-y += src/server_cmm_bridge.o
pvrsrvkm-y += src/server_devicememhistory_bridge.o
pvrsrvkm-y += src/server_dmabuf_bridge.o
pvrsrvkm-y += src/server_htbuffer_bridge.o
pvrsrvkm-y += src/server_mm_bridge.o
pvrsrvkm-y += src/server_pvrtl_bridge.o
pvrsrvkm-y += src/server_rgxbreakpoint_bridge.o
pvrsrvkm-y += src/server_rgxcmp_bridge.o
pvrsrvkm-y += src/server_rgxfwdbg_bridge.o
pvrsrvkm-y += src/server_rgxhwperf_bridge.o
pvrsrvkm-y += src/server_rgxkicksync_bridge.o
pvrsrvkm-y += src/server_rgxregconfig_bridge.o
pvrsrvkm-y += src/server_rgxsignals_bridge.o
pvrsrvkm-y += src/server_rgxta3d_bridge.o
pvrsrvkm-y += src/server_rgxtq2_bridge.o
pvrsrvkm-y += src/server_rgxtq_bridge.o
pvrsrvkm-y += src/server_srvcore_bridge.o
pvrsrvkm-y += src/server_sync_bridge.o
pvrsrvkm-y += src/server_synctracking_bridge.o
pvrsrvkm-y += src/srvcore.o
pvrsrvkm-y += src/sync.o
pvrsrvkm-y += src/sync_checkpoint.o
pvrsrvkm-y += src/sync_server.o
pvrsrvkm-y += src/sysconfig.o
pvrsrvkm-y += src/tlclient.o
pvrsrvkm-y += src/tlintern.o
pvrsrvkm-y += src/tlserver.o
pvrsrvkm-y += src/tlstream.o
pvrsrvkm-y += src/uniq_key_splay_tree.o
pvrsrvkm-y += src/vmm_pvz_client.o
pvrsrvkm-y += src/vmm_pvz_server.o
pvrsrvkm-y += src/vmm_type_stub.o
pvrsrvkm-y += src/vz_vmm_pvz.o
pvrsrvkm-y += src/vz_vmm_vm.o
pvrsrvkm-y += src/di_server.o
pvrsrvkm-y += src/fwload.o
pvrsrvkm-y += src/rgxfwtrace_strings.o
pvrsrvkm-y += src/rgxmulticore.o
pvrsrvkm-y += src/rgxshader.o
pvrsrvkm-y += src/pvr_procfs.o
pvrsrvkm-y += src/gpu_tz.o
pvrsrvkm-y += src/pvr_buffer_sync.o
pvrsrvkm-y += src/physmem_tdfwmem.o
