#include "gpfs_fcntl.h"

int gpfs_getacl(const char *pathname, int flags, void *acl) {
    return 0;
}

int gpfs_getacl_fd(gpfs_file_t fileDesc, int flags, void *acl) {
    return 0;
}

int gpfs_putacl(const char *pathname, int flags, void *acl) {
    return 0;
}

int gpfs_putacl_fd(gpfs_file_t fileDesc, int flags, void *acl) {
    return 0;
}

int gpfs_prealloc(gpfs_file_t fileDesc, gpfs_off64_t startOffset, gpfs_off64_t bytesToPrealloc) {
    return 0;
}

int gpfs_get_winattrs(gpfs_file_t fileDesc, gpfs_winattr_t *attrP) {
    return 0;
}

int gpfs_get_winattrs_path(const char *pathname, gpfs_winattr_t *attrP) {
    return 0;
}

int gpfs_set_winattrs(gpfs_file_t fileDesc, int flags, gpfs_winattr_t *attrP) {
    return 0;
}

int gpfs_set_winattrs_path(const char *pathname, int flags, gpfs_winattr_t *attrP) {
    return 0;
}

int gpfs_set_times(gpfs_file_t fileDesc, int flags, gpfs_times_vector_t times) {
    return 0;
}

int gpfs_set_times_path(char *pathname, int flags, gpfs_times_vector_t times) {
    return 0;
}

int gpfs_set_share(gpfs_file_t fileDesc, unsigned int share, unsigned int deny) {
    return 0;
}

int gpfs_set_lease(gpfs_file_t fileDesc, unsigned int leaseType) {
    return 0;
}

int gpfs_get_lease(gpfs_file_t fileDesc) {
    return 0;
}

int gpfs_get_realfilename(gpfs_file_t fileDesc, char *fileNameP, int *buflen) {
    return 0;
}

int gpfs_get_realfilename_path(const char *pathname, char *fileNameP, int *buflen) {
    return 0;
}

int gpfs_ftruncate(gpfs_file_t fileDesc, gpfs_off64_t length) {
    return 0;
}

int gpfs_register_cifs_export(void) {
    return 0;
}

int gpfs_unregister_cifs_export(void) {
    return 0;
}

int gpfs_register_cifs_buffer(cifsThreadData_t *bufP) {
    return 0;
}

int gpfs_unregister_cifs_buffer(void) {
    return 0;
}

int gpfs_lib_init(int flags) {
    return 0;
}

int gpfs_lib_term(int flags) {
    return 0;
}

int gpfs_fstat(gpfs_file_t fileDesc, gpfs_stat64_t *buffer) {
    return 0;
}

int gpfs_stat(const char *pathname, gpfs_stat64_t *buffer) {
    return 0;
}

int gpfs_linkat(gpfs_file_t olddirfd, const char *oldpath, gpfs_file_t newdirfd, const char *newpath, int flags) {
    return 0;
}

int gpfs_fstat_x(gpfs_file_t fileDesc, unsigned int *st_litemaskP, gpfs_iattr64_t *iattr, size_t iattrBufLen) {
    return 0;
}

int gpfs_stat_x(const char *pathname, unsigned int *st_litemaskP, gpfs_iattr64_t *iattr, size_t iattrBufLen) {
    return 0;
}

int gpfs_statfs64(const char *pathname, gpfs_statfs64_t *buffer) {
    return 0;
}

int gpfs_statlite(const char *pathname, unsigned int *st_litemaskP, gpfs_stat64_t *statbufP) {
    return 0;
}

int gpfs_lstatlite(const char *pathname, unsigned int *st_litemaskP, gpfs_stat64_t *statbufP) {
    return 0;
}

int gpfs_fgetattrs(gpfs_file_t fileDesc, int flags, void *bufferP, int bufferSize, int *attrSizeP) {
    return 0;
}

int gpfs_fputattrs(gpfs_file_t fileDesc, int flags, void *bufferP) {
    return 0;
}

int gpfs_fputattrswithpathname(gpfs_file_t fileDesc, int flags, void *bufferP, const char *pathName) {
    return 0;
}

gpfs_fssnap_handle_t *gpfs_get_fssnaphandle_by_path(const char *pathName) {
    return NULL;
}

gpfs_fssnap_handle_t *gpfs_get_fssnaphandle_by_name(const char *fsName, const char *snapName) {
    return NULL;
}

gpfs_fssnap_handle_t *gpfs_get_fssnaphandle_by_fssnapid(const gpfs_fssnap_id_t *fssnapId) {
    return NULL;
}

gpfs_fssnap_handle_t *gpfs_get_fset_snaphandle_by_path(const char *pathName) {
    return NULL;
}

gpfs_fssnap_handle_t *gpfs_get_fset_snaphandle_by_name(const char *fsName, const char *fsetName, const char *snapName) {
    return NULL;
}

gpfs_fssnap_handle_t *gpfs_get_fset_snaphandle_by_fset_snapid(const gpfs_fssnap_id_t *fsetsnapId) {
    return NULL;
}

const char *gpfs_get_pathname_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle) {
    return NULL;
}

const char *gpfs_get_fsname_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle) {
    return NULL;
}

const char *gpfs_get_snapname_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle) {
    return NULL;
}

gpfs_snapid_t gpfs_get_snapid_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle) {
    return 0;
}

gpfs_snapid64_t gpfs_get_snapid_from_fssnaphandle64(gpfs_fssnap_handle_t *fssnapHandle) {
    return 0;
}

int gpfs_get_fssnapid_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle, gpfs_fssnap_id_t *fssnapId) {
    return 0;
}

int gpfs_get_restore_fssnapid_from_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle, gpfs_fssnap_id_t *fssnapId) {
    return 0;
}

void gpfs_free_fssnaphandle(gpfs_fssnap_handle_t *fssnapHandle) {
}

int gpfs_get_snapdirname(gpfs_fssnap_handle_t *fssnapHandle, char *snapdirName, int bufLen) {
    return 0;
}

gpfs_iscan_t *gpfs_open_inodescan(gpfs_fssnap_handle_t *fssnapHandle, const gpfs_fssnap_id_t *prev_fssnapId, gpfs_ino_t *maxIno) {
    return NULL;
}

gpfs_iscan_t *gpfs_open_inodescan64(gpfs_fssnap_handle_t *fssnapHandle, const gpfs_fssnap_id_t *prev_fssnapId, gpfs_ino64_t *maxIno) {
    return NULL;
}

gpfs_iscan_t *gpfs_open_inodescan_with_xattrs(gpfs_fssnap_handle_t *fssnapHandle, const gpfs_fssnap_id_t *prev_fssnapId, int nxAttrs, const char *xattrsList[], gpfs_ino_t *maxIno) {
    return NULL;
}

gpfs_iscan_t *gpfs_open_inodescan_with_xattrs64(gpfs_fssnap_handle_t *fssnapHandle, const gpfs_fssnap_id_t *prev_fssnapId, int nxAttrs, const char *xattrList[], gpfs_ino64_t *maxIno) {
    return NULL;
}

int gpfs_next_inode(gpfs_iscan_t *iscan, gpfs_ino_t termIno, const gpfs_iattr_t **iattr) {
    return 0;
}

int gpfs_next_inode64(gpfs_iscan_t *iscan, gpfs_ino64_t termIno, const gpfs_iattr64_t **iattr) {
    return 0;
}

int gpfs_next_inode_with_xattrs(gpfs_iscan_t *iscan, gpfs_ino_t termIno, const gpfs_iattr_t **iattr, const char **xattrBuf, unsigned int *xattrBufLen) {
    return 0;
}

int gpfs_next_inode_with_xattrs64(gpfs_iscan_t *iscan, gpfs_ino64_t termIno, const gpfs_iattr64_t **iattr, const char **xattrBuf, unsigned int *xattrBufLen) {
    return 0;
}

int gpfs_next_xattr(gpfs_iscan_t *iscan, const char **xattrBuf, unsigned int *xattrBufLen, const char **name, unsigned int *valueLen, const char **value) {
    return 0;
}

int gpfs_seek_inode(gpfs_iscan_t *iscan, gpfs_ino_t ino) {
    return 0;
}

int gpfs_seek_inode64(gpfs_iscan_t *iscan, gpfs_ino64_t ino) {
    return 0;
}

int gpfs_stat_inode(gpfs_iscan_t *iscan, gpfs_ino_t ino, gpfs_ino_t termIno, const gpfs_iattr_t **iattr) {
    return 0;
}

int gpfs_stat_inode64(gpfs_iscan_t *iscan, gpfs_ino64_t ino, gpfs_ino64_t termIno, const gpfs_iattr64_t **iattr) {
    return 0;
}

int gpfs_stat_inode_with_xattrs(gpfs_iscan_t *iscan, gpfs_ino_t ino, gpfs_ino_t termIno, const gpfs_iattr_t **iattr, const char **xattrBuf, unsigned int *xattrBufLen) {
    return 0;
}

int gpfs_stat_inode_with_xattrs64(gpfs_iscan_t *iscan, gpfs_ino64_t ino, gpfs_ino64_t termIno, const gpfs_iattr64_t **iattr, const char **xattrBuf, unsigned int *xattrBufLen) {
    return 0;
}

void gpfs_close_inodescan(gpfs_iscan_t *iscan) {
}

int gpfs_cmp_fssnapid(const gpfs_fssnap_id_t *fssnapId1, const gpfs_fssnap_id_t *fssnapId2, int *result) {
    return 0;
}

gpfs_ifile_t *gpfs_iopen(gpfs_fssnap_handle_t *fssnapHandle, gpfs_ino_t ino, int open_flags, const gpfs_iattr_t *statxbuf, const char *symLink) {
    return NULL;
}

gpfs_ifile_t *gpfs_iopen64(gpfs_fssnap_handle_t *fssnapHandle, gpfs_ino64_t ino, int open_flags, const gpfs_iattr64_t *statxbuf, const char *symLink) {
    return NULL;
}

int gpfs_iread(gpfs_ifile_t *ifile, void *buffer, int bufferSize, gpfs_off64_t *offset) {
    return 0;
}

int gpfs_iwrite(gpfs_ifile_t *ifile, void *buffer, int writeLen, gpfs_off64_t *offset) {
    return 0;
}

int gpfs_ireaddir(gpfs_ifile_t *idir, const gpfs_direntx_t **dirent) {
    return 0;
}

int gpfs_ireaddir64(gpfs_ifile_t *idir, const gpfs_direntx64_t **dirent) {
    return 0;
}

int gpfs_ireaddirx(gpfs_ifile_t *idir, gpfs_iscan_t *iscan, const gpfs_direntx_t **dirent) {
    return 0;
}

int gpfs_ireaddirx64(gpfs_ifile_t *idir, gpfs_iscan_t *iscan, const gpfs_direntx64_t **dirent) {
    return 0;
}

int gpfs_iwritedir(gpfs_ifile_t *idir, const gpfs_direntx_t *dirent) {
    return 0;
}

int gpfs_iwritedir64(gpfs_ifile_t *idir, const gpfs_direntx64_t *dirent) {
    return 0;
}

int gpfs_igetattrs(gpfs_ifile_t *ifile, void *buffer, int bufferSize, int *attrSize) {
    return 0;
}

int gpfs_igetattrsx(gpfs_ifile_t *ifile, int flags, void *buffer, int bufferSize, int *attrSize) {
    return 0;
}

int gpfs_igetxattr(gpfs_ifile_t *ifile, void *buffer, int bufferSize, int *attrSize) {
    return 0;
}

int gpfs_iputattrs(gpfs_ifile_t *ifile, void *buffer) {
    return 0;
}

int gpfs_iputattrsx(gpfs_ifile_t *ifile, int flags, void *buffer, const char *pathName) {
    return 0;
}

int gpfs_igetcompressionlib(gpfs_ifile_t *ifile, void *buffer, int bufferSize, int *attrSize) {
    return 0;
}

int gpfs_igetfilesetname(gpfs_iscan_t *iscan, unsigned int filesetId, void *buffer, int bufferSize) {
    return 0;
}

int gpfs_igetstoragepool(gpfs_iscan_t *iscan, unsigned int dataPoolId, void *buffer, int bufferSize) {
    return 0;
}

void gpfs_iclose(gpfs_ifile_t *ifile) {
}

int gpfs_ireadlink(gpfs_fssnap_handle_t *fssnapHandle, gpfs_ino_t ino, char *buffer, int bufferSize) {
    return 0;
}

int gpfs_ireadlink64(gpfs_fssnap_handle_t *fssnapHandle, gpfs_ino64_t ino, char *buffer, int bufferSize) {
    return 0;
}

int gpfs_sync_fs(gpfs_fssnap_handle_t *fssnapHandle) {
    return 0;
}

int gpfs_enable_restore(gpfs_fssnap_handle_t *fssnapHandle, int on_off) {
    return 0;
}

gpfs_restore_t *gpfs_start_restore(gpfs_fssnap_handle_t *fssnapHandle, int restore_flags, const gpfs_fssnap_id_t *old_fssnapId, const gpfs_fssnap_id_t *new_fssnapId) {
    return NULL;
}

int gpfs_end_restore(gpfs_restore_t *restoreId) {
    return 0;
}

gpfs_off64_t gpfs_ireadx(gpfs_ifile_t *ifile, gpfs_iscan_t *iscan, void *buffer, int bufferSize, gpfs_off64_t *offset, gpfs_off64_t termOffset, int *hole) {
    return 0;
}

gpfs_off64_t gpfs_ireadx_ext(gpfs_ifile_t *ifile, gpfs_iscan_t *iscan, void *buffer, int bufferSize, gpfs_off64_t *offset, gpfs_off64_t termOffset, int *hole) {
    return 0;
}

gpfs_off64_t gpfs_iwritex(gpfs_ifile_t *ifile, void *buffer, gpfs_off64_t writeLen, gpfs_off64_t offset, int hole) {
    return 0;
}

int gpfs_ifcntl(gpfs_ifile_t *ifile, void *fcntlArgP) {
    return 0;
}

int gpfs_statfspool(const char *pathname, gpfs_pool_t *poolId, unsigned int options, int *nPools, void *buffer, int bufferSize) {
    return 0;
}

int gpfs_getpoolname(const char *pathname, gpfs_pool_t poolId, void *buffer, int bufferSize) {
    return 0;
}

int gpfs_quotactl(const char *pathname, int cmd, int id, void *bufferP) {
    return 0;
}

int gpfs_getfilesetid(const char *pathname, const char *name, int *idP) {
    return 0;
}

int gpfs_clone_snap(const char *sourcePathP, const char *destPathP) {
    return 0;
}

int gpfs_clone_copy(const char *sourcePathP, const char *destPathP) {
    return 0;
}

int gpfs_declone(gpfs_file_t fileDesc, int ancLimit, gpfs_off64_t nBlocks, gpfs_off64_t *offsetP) {
    return 0;
}

int gpfs_clone_split(gpfs_file_t fileDesc, int ancLimit) {
    return 0;
}

int gpfs_clone_unsnap(gpfs_file_t fileDesc) {
    return 0;
}

int gpfs_get_fset_masks(gpfs_fssnap_handle_t *fset_snapHandle, gpfs_ino64_t *inodeSpaceMask, gpfs_ino64_t *inodeBlockMask, int *inodesPerInodeBlock) {
    return 0;
}

int gpfs_lwe_create_session(gpfs_lwe_sessid_t oldsid, char *sessinfop, gpfs_lwe_sessid_t *newsidp) {
    return 0;
}

int gpfs_lwe_destroy_session(gpfs_lwe_sessid_t sid) {
    return 0;
}

int gpfs_lwe_getall_sessions(unsigned int nelem, gpfs_lwe_sessid_t *sidbufp, unsigned int *nelemp) {
    return 0;
}

int gpfs_lwe_query_session(gpfs_lwe_sessid_t sid, size_t buflen, void *bufp, size_t *rlenP) {
    return 0;
}

int gpfs_lwe_get_events(gpfs_lwe_sessid_t sid, unsigned int maxmsgs, unsigned int flags, size_t buflen, void *bufp, size_t *rlenp) {
    return 0;
}

int gpfs_lwe_respond_event(gpfs_lwe_sessid_t sid, gpfs_lwe_token_t token, gpfs_lwe_resp_t response, int reterror) {
    return 0;
}

int gpfs_lwe_request_right(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, unsigned int right, unsigned int flags, gpfs_lwe_token_t *token) {
    return 0;
}

int gpfs_lwe_upgrade_right(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, gpfs_lwe_token_t token) {
    return 0;
}

int gpfs_lwe_downgrade_right(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, gpfs_lwe_token_t token) {
    return 0;
}

int gpfs_lwe_release_right(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, gpfs_lwe_token_t token) {
    return 0;
}

int gpfs_lwe_getattrs(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, gpfs_lwe_token_t token, int flags, void *buffer, int bufferSize, int *attrSize) {
    return 0;
}

int gpfs_lwe_putattrs(gpfs_lwe_sessid_t sid, void *hanp, size_t hlen, gpfs_lwe_token_t token, int flags, void *buffer, const char *pathName) {
    return 0;
}

const char *gpfs_get_fspathname_from_fsname(const char *fsname_or_path) {
    return NULL;
}

int gpfs_qos_getstats(const char *fspathname, unsigned int options, unsigned int qosid, gpfs_pool_t poolid, unsigned int mqips, unsigned int nslots, void *bufferP, unsigned int bufferSize) {
    return 0;
}

int gpfs_qos_control(const char *fspathname, void *bufferP, unsigned int bufferSize) {
    return 0;
}

int gpfs_qos_set(const char *fspathname, const char *classname, int id, int which, double *qshareP) {
    return 0;
}

int gpfs_qos_get(const char *fspathname, int *classnumP, char classname[255 + 1], int id, int which, double *qshareP) {
    return 0;
}

int gpfs_qos_lkupName(const char *fspathname, int *classnumP, const char *classname, double *qshareP) {
    return 0;
}

int gpfs_qos_lkupVal(const char *fspathname, int val, char classname[255 + 1], double *qshareP) {
    return 0;
}

int gpfs_ioprio_set(int, int, int) {
    return 0;
}

int gpfs_ioprio_get(int, int) {
    return 0;
}

int gpfs_enc_file_rewrap_key(gpfs_file_t fileDesc, gpfs_enc_key_id_t orig_key_p, gpfs_enc_key_id_t new_key_p) {
    return 0;
}

int gpfs_enc_get_algo(gpfs_file_t fileDesc, const char *encryption_xattrP, int xattr_len, char *algo_txtP, int algo_txt_size) {
    return 0;
}

int gpfs_init_trace(void) {
    return 0;
}

int gpfs_query_trace(void) {
    return 0;
}

void gpfs_add_trace(int level, const char *msg) {
}

void gpfs_fini_trace(void) {
}

int gpfs_fcntl(gpfs_file_t fileDesc, void *fcntlArgP) {
    return 0;
}

int gpfs_restripe_file(gpfs_file_t fileDesc, void *fcntlArgP, int noBlocks) {
    return 0;
}

int gpfs_restripe_file_by_parts(gpfs_file_t fileDesc, void *fcntlArgP, int part_number, int number_of_parts) {
    return 0;
}

int gpfs_restripe_ifile(gpfs_ifile_t *ifileP, void *fcntlArgP, int noBlocks) {
    return 0;
}

int gpfs_restripe_ifile_by_parts(gpfs_ifile_t *ifileP, void *fcntlArgP, int part_number, int number_of_parts) {
    return 0;
}
