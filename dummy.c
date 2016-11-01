#include "helpers.h"

/*#define DUMMY(f) \
    void f(void) __attribute__((naked,noinline)) SOFTFP; \
    void f(void) \
    { \
        __asm__ volatile("blx " #f "@GLIBC_2.19");\
    }
*/

extern int fprintf(void *, const char *, ...);
extern void *stderr;
extern void abort(void);

#define DUMMY(f, ...) \
    void f(void) \
    { \
        fprintf(stderr, "unimplemented function: %s\n", __FUNCTION__); \
        abort(); \
    }

// TODO
DUMMY(lstat)
DUMMY(__FD_SET_chk)
DUMMY(__FD_ISSET_chk)
DUMMY(__open_2)
DUMMY(mknod)

//TODO
DUMMY(opendir);
DUMMY(readdir_r);
DUMMY(closedir);
DUMMY(sleep);
DUMMY(daemon);
DUMMY(getcwd);
DUMMY(capset);

// TODO
DUMMY(fseek);
DUMMY(ftell);
DUMMY(fileno);
DUMMY(fsync);

DUMMY(waitpid);
DUMMY(init_module);
DUMMY(delete_module);
DUMMY(socketpair);
DUMMY(dup);
DUMMY(tcgetattr);
DUMMY(tcsetattr);
DUMMY(mkdir);
DUMMY(chmod);
DUMMY(chown);
DUMMY(rename);
DUMMY(mkdirat);
DUMMY(openat);
DUMMY(setsockopt);
DUMMY(listen);
DUMMY(gethostbyname);
DUMMY(select);
DUMMY(getsockopt);
DUMMY(sync);
DUMMY(setmntent);
DUMMY(getmntent);
DUMMY(endmntent);
DUMMY(usleep);
DUMMY(reboot);
DUMMY(ioctl);
DUMMY(strtoimax);
DUMMY(recvmsg);
DUMMY(inet_ntoa);
DUMMY(__strcpy_chk);
DUMMY(inet_addr);

// TODO
DUMMY(getaddrinfo);
DUMMY(freeaddrinfo);

DUMMY(if_nametoindex);
DUMMY(send);
DUMMY(sendmsg);
DUMMY(perror);



// ALL
//DUMMY(___Unwind_Backtrace);
//DUMMY(___Unwind_ForcedUnwind);
//DUMMY(___Unwind_RaiseException);
//DUMMY(___Unwind_Resume);
//DUMMY(___Unwind_Resume_or_Rethrow);
//DUMMY(__accept4);
//DUMMY(__adddf3);
//DUMMY(__addsf3);
DUMMY(__aeabi_cdcmpeq);
DUMMY(__aeabi_cdcmple);
DUMMY(__aeabi_cdrcmple);
DUMMY(__aeabi_d2f);
DUMMY(__aeabi_d2iz);
DUMMY(__aeabi_dadd);
DUMMY(__aeabi_dcmpeq);
DUMMY(__aeabi_dcmpge);
DUMMY(__aeabi_dcmpgt);
DUMMY(__aeabi_dcmple);
DUMMY(__aeabi_dcmplt);
DUMMY(__aeabi_dcmpun);
DUMMY(__aeabi_ddiv);
DUMMY(__aeabi_dmul);
DUMMY(__aeabi_drsub);
DUMMY(__aeabi_dsub);
DUMMY(__aeabi_f2d);
DUMMY(__aeabi_f2iz);
DUMMY(__aeabi_f2uiz);
DUMMY(__aeabi_fadd);
DUMMY(__aeabi_fcmpun);
DUMMY(__aeabi_fdiv);
DUMMY(__aeabi_fmul);
DUMMY(__aeabi_frsub);
DUMMY(__aeabi_fsub);
DUMMY(__aeabi_i2d);
DUMMY(__aeabi_i2f);
DUMMY(__aeabi_idiv);
DUMMY(__aeabi_idiv0);
DUMMY(__aeabi_idivmod);
DUMMY(__aeabi_l2d);
DUMMY(__aeabi_l2f);
DUMMY(__aeabi_lasr);
DUMMY(__aeabi_ldiv0);
DUMMY(__aeabi_ldivmod);
DUMMY(__aeabi_llsl);
DUMMY(__aeabi_llsr);
DUMMY(__aeabi_lmul);
DUMMY(__aeabi_memclr);
DUMMY(__aeabi_memclr4);
DUMMY(__aeabi_memclr8);
DUMMY(__aeabi_memcpy4);
DUMMY(__aeabi_memcpy8);
DUMMY(__aeabi_memmove4);
DUMMY(__aeabi_memmove8);
DUMMY(__aeabi_memset4);
DUMMY(__aeabi_memset8);
DUMMY(__aeabi_ui2d);
DUMMY(__aeabi_ui2f);
DUMMY(__aeabi_uidiv);
DUMMY(__aeabi_uidivmod);
DUMMY(__aeabi_ul2d);
DUMMY(__aeabi_ul2f);
DUMMY(__aeabi_uldivmod);
DUMMY(__aeabi_unwind_cpp_pr0);
DUMMY(__aeabi_unwind_cpp_pr1);
DUMMY(__aeabi_unwind_cpp_pr2);
//DUMMY(__arm_fadvise64_64);
//DUMMY(__ashldi3);
//DUMMY(__ashrdi3);
//DUMMY(__bionic_brk);
//DUMMY(__bionic_libgcc_compat_symbols);
//DUMMY(__bionic_libgcc_unwind_symbols);
//DUMMY(__dso_handle);
//DUMMY(__gnu_Unwind_Backtrace);
//DUMMY(__gnu_unwind_execute);
//DUMMY(__gnu_Unwind_Find_exidx);
//DUMMY(__gnu_Unwind_ForcedUnwind);
//DUMMY(__gnu_unwind_frame);
//DUMMY(__gnu_Unwind_RaiseException);
//DUMMY(__gnu_Unwind_Restore_VFP);
//DUMMY(__gnu_Unwind_Restore_VFP_D);
//DUMMY(__gnu_Unwind_Restore_VFP_D_16_to_31);
//DUMMY(__gnu_Unwind_Restore_WMMXC);
//DUMMY(__gnu_Unwind_Restore_WMMXD);
//DUMMY(__gnu_Unwind_Resume);
//DUMMY(__gnu_Unwind_Resume_or_Rethrow);
//DUMMY(__gnu_Unwind_Save_VFP);
//DUMMY(__gnu_Unwind_Save_VFP_D);
//DUMMY(__gnu_Unwind_Save_VFP_D_16_to_31);
//DUMMY(__gnu_Unwind_Save_WMMXC);
//DUMMY(__gnu_Unwind_Save_WMMXD);
//DUMMY(_Unwind_Backtrace);
//DUMMY(_Unwind_Complete);
//DUMMY(_Unwind_DeleteException);
//DUMMY(_Unwind_ForcedUnwind);
//DUMMY(_Unwind_GetCFA);
//DUMMY(_Unwind_GetDataRelBase);
//DUMMY(_Unwind_GetLanguageSpecificData);
//DUMMY(_Unwind_GetRegionStart);
//DUMMY(_Unwind_GetTextRelBase);
//DUMMY(_Unwind_RaiseException);
//DUMMY(_Unwind_Resume);
//DUMMY(_Unwind_Resume_or_Rethrow);
//DUMMY(_Unwind_VRS_Get);
//DUMMY(_Unwind_VRS_Pop);
//DUMMY(_Unwind_VRS_Set);
//DUMMY(atexit);
//DUMMY(dlmalloc);
//DUMMY(dlmalloc_inspect_all);
//DUMMY(dlmalloc_trim);
//DUMMY(dlmalloc_usable_size);
//DUMMY(gMallocLeakZygoteChild);
//DUMMY(SHA1Final);
//DUMMY(SHA1Init);
//DUMMY(SHA1Transform);
//DUMMY(SHA1Update);

//DUMMY(__assert);
//DUMMY(__assert2);
//DUMMY(__atomic_cmpxchg);
//DUMMY(__atomic_dec);
//DUMMY(__atomic_inc);
//DUMMY(__atomic_swap);
//DUMMY(__b64_ntop);
//DUMMY(__b64_pton);
//DUMMY(__brk);
//DUMMY(__cmpdf2);
//DUMMY(__cmsg_nxthdr);
//DUMMY(__connect);
//DUMMY(__ctype_get_mb_cur_max);
//DUMMY(__cxa_atexit);
//DUMMY(__cxa_finalize);
//DUMMY(__cxa_thread_atexit_impl);
//DUMMY(__divdf3);
//DUMMY(__divdi3);
//DUMMY(__divsf3);
//DUMMY(__divsi3);
//DUMMY(__dn_comp);
//DUMMY(__dn_count_labels);
//DUMMY(__dn_skipname);
//DUMMY(__epoll_pwait);
//DUMMY(__eqdf2);
//DUMMY(__errno);
//DUMMY(__exit);
//DUMMY(__extendsfdf2);
//DUMMY(__fadvise64);
//DUMMY(__fbufsize);
//DUMMY(__fcntl64);
//DUMMY(__FD_CLR_chk);
//DUMMY(__FD_ISSET_chk);
//DUMMY(__FD_SET_chk);
//DUMMY(__fgets_chk);
//DUMMY(__fixdfsi);
//DUMMY(__fixsfsi);
//DUMMY(__fixunssfsi);
//DUMMY(__flbf);
//DUMMY(__floatdidf);
//DUMMY(__floatdisf);
//DUMMY(__floatsidf);
//DUMMY(__floatsisf);
//DUMMY(__floatundidf);
//DUMMY(__floatundisf);
//DUMMY(__floatunsidf);
//DUMMY(__floatunsisf);
//DUMMY(__fp_nquery);
//DUMMY(__fp_query);
//DUMMY(__fpclassify);
//DUMMY(__fpclassifyd);
//DUMMY(__fpclassifyf);
//DUMMY(__fpclassifyl);
//DUMMY(__fpending);
//DUMMY(__fpurge);
//DUMMY(__freadable);
//DUMMY(__fsetlocking);
//DUMMY(__fstatfs64);
//DUMMY(__futex_wait);
//DUMMY(__futex_wake);
//DUMMY(__fwritable);
//DUMMY(__gedf2);
//DUMMY(__get_h_errno);
//DUMMY(__get_thread);
//DUMMY(__get_tls);
//DUMMY(__getcpu);
//DUMMY(__getcwd);
//DUMMY(__getdents64);
//DUMMY(__getpid);
//DUMMY(__getpriority);
//DUMMY(__gnu_basename);
//DUMMY(__gnu_ldivmod_helper);
//DUMMY(__gnu_strerror_r);
//DUMMY(__gnu_uldivmod_helper);
//DUMMY(__gtdf2);
//DUMMY(__hostalias);
//DUMMY(__ioctl);
//DUMMY(__isfinite);
//DUMMY(__isfinitef);
//DUMMY(__isfinitel);
//DUMMY(__isinf);
//DUMMY(__isinff);
//DUMMY(__isinfl);
//DUMMY(__isnan);
//DUMMY(__isnanf);
//DUMMY(__isnanl);
//DUMMY(__isnormal);
//DUMMY(__isnormalf);
//DUMMY(__isnormall);
//DUMMY(__isthreaded);
//DUMMY(__ledf2);
//DUMMY(__libc_current_sigrtmax);
//DUMMY(__libc_current_sigrtmin);
//DUMMY(__libc_init);
//DUMMY(__llseek);
//DUMMY(__loc_aton);
//DUMMY(__loc_ntoa);
//DUMMY(__lshrdi3);
//DUMMY(__ltdf2);
//DUMMY(__memchr_chk);
//DUMMY(__memcpy_chk);
//DUMMY(__memmove_chk);
//DUMMY(__memrchr_chk);
//DUMMY(__memset_chk);
//DUMMY(__mmap2);
//DUMMY(__moddi3);
//DUMMY(__muldf3);
//DUMMY(__muldi3);
//DUMMY(__mulsf3);
//DUMMY(__nedf2);
//DUMMY(__ns_format_ttl);
//DUMMY(__ns_get16);
//DUMMY(__ns_get32);
//DUMMY(__ns_initparse);
//DUMMY(__ns_makecanon);
//DUMMY(__ns_msg_getflag);
//DUMMY(__ns_name_compress);
//DUMMY(__ns_name_ntol);
//DUMMY(__ns_name_ntop);
//DUMMY(__ns_name_pack);
//DUMMY(__ns_name_pton);
//DUMMY(__ns_name_rollback);
//DUMMY(__ns_name_skip);
//DUMMY(__ns_name_uncompress);
//DUMMY(__ns_name_unpack);
//DUMMY(__ns_parserr);
//DUMMY(__ns_put16);
//DUMMY(__ns_put32);
//DUMMY(__ns_samename);
//DUMMY(__ns_skiprr);
//DUMMY(__ns_sprintrr);
//DUMMY(__ns_sprintrrf);
//DUMMY(__open);
//DUMMY(__open_2);
//DUMMY(__openat);
//DUMMY(__openat_2);
//DUMMY(__p_cdname);
//DUMMY(__p_cdnname);
//DUMMY(__p_class);
//DUMMY(__p_class_syms);
//DUMMY(__p_fqname);
//DUMMY(__p_fqnname);
//DUMMY(__p_option);
//DUMMY(__p_query);
//DUMMY(__p_rcode);
//DUMMY(__p_secstodate);
//DUMMY(__p_time);
//DUMMY(__p_type);
//DUMMY(__p_type_syms);
//DUMMY(__page_shift);
//DUMMY(__page_size);
//DUMMY(__poll_chk);
//DUMMY(__popcount_tab);
//DUMMY(__popcountsi2);
//DUMMY(__ppoll);
//DUMMY(__ppoll_chk);
//DUMMY(__pread64_chk);
//DUMMY(__pread_chk);
//DUMMY(__progname);
//DUMMY(__pselect6);
//DUMMY(__pthread_cleanup_pop);
//DUMMY(__pthread_cleanup_push);
//DUMMY(__pthread_gettid);
//DUMMY(__ptrace);
//DUMMY(__putlong);
//DUMMY(__putshort);
//DUMMY(__read_chk);
//DUMMY(__readlink_chk);
//DUMMY(__readlinkat_chk);
//DUMMY(__reboot);
//DUMMY(__recvfrom_chk);
//DUMMY(__register_atfork);
//DUMMY(__res_close);
//DUMMY(__res_dnok);
//DUMMY(__res_hnok);
//DUMMY(__res_hostalias);
//DUMMY(__res_isourserver);
//DUMMY(__res_mailok);
//DUMMY(__res_nameinquery);
//DUMMY(__res_nclose);
//DUMMY(__res_ninit);
//DUMMY(__res_nmkquery);
//DUMMY(__res_nquery);
//DUMMY(__res_nquerydomain);
//DUMMY(__res_nsearch);
//DUMMY(__res_nsend);
//DUMMY(__res_ownok);
//DUMMY(__res_queriesmatch);
//DUMMY(__res_querydomain);
//DUMMY(__res_send);
//DUMMY(__res_send_setqhook);
//DUMMY(__res_send_setrhook);
//DUMMY(__restore_core_regs);
//DUMMY(__rt_sigaction);
//DUMMY(__rt_sigpending);
//DUMMY(__rt_sigprocmask);
//DUMMY(__rt_sigsuspend);
//DUMMY(__rt_sigtimedwait);
//DUMMY(__sched_cpualloc);
//DUMMY(__sched_cpucount);
//DUMMY(__sched_cpufree);
//DUMMY(__sched_getaffinity);
//DUMMY(__sclose);
//DUMMY(__sdidinit);
//DUMMY(__set_errno);
//DUMMY(__set_thread_area);
//DUMMY(__set_tid_address);
//DUMMY(__set_tls);
//DUMMY(__sF);
//DUMMY(__sflags);
//DUMMY(__sflush);
//DUMMY(__sfp);
//DUMMY(__sglue);
//DUMMY(__sigaction);
//DUMMY(__signalfd4);
//DUMMY(__sinit);
//DUMMY(__smakebuf);
//DUMMY(__snprintf_chk);
//DUMMY(__socket);
//DUMMY(__sprintf_chk);
//DUMMY(__sread);
//DUMMY(__srefill);
//DUMMY(__srget);
//DUMMY(__sseek);
//DUMMY(__stack_chk_fail);
//DUMMY(__stack_chk_guard);
//DUMMY(__statfs64);
//DUMMY(__stpcpy_chk);
//DUMMY(__stpncpy_chk);
//DUMMY(__stpncpy_chk2);
//DUMMY(__strcat_chk);
//DUMMY(__strchr_chk);
//DUMMY(__strcpy_chk);
//DUMMY(__strlcat_chk);
//DUMMY(__strlcpy_chk);
//DUMMY(__strlen_chk);
//DUMMY(__strncat_chk);
//DUMMY(__strncpy_chk);
//DUMMY(__strncpy_chk2);
//DUMMY(__strrchr_chk);
//DUMMY(__subdf3);
//DUMMY(__subsf3);
//DUMMY(__swbuf);
//DUMMY(__swrite);
//DUMMY(__swsetup);
//DUMMY(__sym_ntop);
//DUMMY(__sym_ntos);
//DUMMY(__sym_ston);
//DUMMY(__system_properties_init);
//DUMMY(__system_property_add);
//DUMMY(__system_property_area__);
//DUMMY(__system_property_area_init);
//DUMMY(__system_property_area_serial);
//DUMMY(__system_property_find);
//DUMMY(__system_property_find_nth);
//DUMMY(__system_property_foreach);
//DUMMY(__system_property_get);
//DUMMY(__system_property_read);
//DUMMY(__system_property_serial);
//DUMMY(__system_property_set);
//DUMMY(__system_property_set_filename);
//DUMMY(__system_property_update);
//DUMMY(__system_property_wait_any);
//DUMMY(__timer_create);
//DUMMY(__timer_delete);
//DUMMY(__timer_getoverrun);
//DUMMY(__timer_gettime);
//DUMMY(__timer_settime);
//DUMMY(__truncdfsf2);
//DUMMY(__udivdi3);
//DUMMY(__udivsi3);
//DUMMY(__umask_chk);
//DUMMY(__umoddi3);
//DUMMY(__unorddf2);
//DUMMY(__unordsf2);
//DUMMY(__vsnprintf_chk);
//DUMMY(__vsprintf_chk);
//DUMMY(__wait4);
//DUMMY(__waitid);
//DUMMY(_ctype_);
//DUMMY(_Exit);
//DUMMY(_exit);
//DUMMY(_flush_cache);
//DUMMY(_flushlbf);
//DUMMY(_fwalk);
//DUMMY(_getlong);
//DUMMY(_getshort);
//DUMMY(_longjmp);
//DUMMY(_resolv_delete_cache_for_net);
//DUMMY(_resolv_flush_cache_for_net);
//DUMMY(_resolv_set_nameservers_for_net);
//DUMMY(_setjmp);
//DUMMY(_tolower);
//DUMMY(_tolower_tab_);
//DUMMY(_toupper);
//DUMMY(_toupper_tab_);
//DUMMY(abort);
//DUMMY(abs);
//DUMMY(accept);
//DUMMY(accept4);
//DUMMY(access);
//DUMMY(acct);
//DUMMY(alarm);
//DUMMY(alphasort);
//DUMMY(alphasort64);
//DUMMY(android_getaddrinfofornet);
//DUMMY(android_getaddrinfofornetcontext);
//DUMMY(android_gethostbyaddrfornet);
//DUMMY(android_gethostbynamefornet);
//DUMMY(android_set_abort_message);
//DUMMY(arc4random);
//DUMMY(arc4random_addrandom);
//DUMMY(arc4random_buf);
//DUMMY(arc4random_stir);
//DUMMY(arc4random_uniform);
//DUMMY(asctime);
//DUMMY(asctime64);
//DUMMY(asctime64_r);
//DUMMY(asctime_r);
//DUMMY(asprintf);
//DUMMY(at_quick_exit);
//DUMMY(atof);
//DUMMY(atoi);
//DUMMY(atol);
//DUMMY(atoll);
//DUMMY(basename);
//DUMMY(basename_r);
//DUMMY(bcopy);
//DUMMY(bind);
//DUMMY(bindresvport);
//DUMMY(brk);
//DUMMY(bsd_signal);
//DUMMY(bsearch);
//DUMMY(btowc);
//DUMMY(bzero);
//DUMMY(c16rtomb);
//DUMMY(c32rtomb);
//DUMMY(cacheflush);
//DUMMY(calloc);
//DUMMY(capget);
//DUMMY(capset);
//DUMMY(cfgetispeed);
//DUMMY(cfgetospeed);
//DUMMY(cfmakeraw);
//DUMMY(cfsetispeed);
//DUMMY(cfsetospeed);
//DUMMY(cfsetspeed);
//DUMMY(chdir);
//DUMMY(chmod);
//DUMMY(chown);
//DUMMY(chroot);
//DUMMY(clearenv);
//DUMMY(clearerr);
//DUMMY(clearerr_unlocked);
//DUMMY(clock);
//DUMMY(clock_getcpuclockid);
//DUMMY(clock_getres);
//DUMMY(clock_gettime);
//DUMMY(clock_nanosleep);
//DUMMY(clock_settime);
//DUMMY(clone);
//DUMMY(close);
//DUMMY(closedir);
//DUMMY(closelog);
//DUMMY(connect);
//DUMMY(creat);
//DUMMY(creat64);
//DUMMY(ctime);
//DUMMY(ctime64);
//DUMMY(ctime64_r);
//DUMMY(ctime_r);
//DUMMY(daemon);
//DUMMY(daylight);
//DUMMY(delete_module);
//DUMMY(difftime);
//DUMMY(dirfd);
//DUMMY(dirname);
//DUMMY(dirname_r);
//DUMMY(div);
//DUMMY(dn_expand);
//DUMMY(dprintf);
//DUMMY(drand48);
//DUMMY(dup);
//DUMMY(dup2);
//DUMMY(dup3);
//DUMMY(duplocale);
//DUMMY(endmntent);
//DUMMY(endpwent);
//DUMMY(endservent);
//DUMMY(endusershell);
//DUMMY(endutent);
//DUMMY(environ);
DUMMY(epoll_create);
DUMMY(epoll_create1);
DUMMY(epoll_ctl);
DUMMY(epoll_pwait);
DUMMY(epoll_wait);
//DUMMY(erand48);
//DUMMY(err);
//DUMMY(error);
//DUMMY(error_at_line);
//DUMMY(error_message_count);
//DUMMY(error_one_per_line);
//DUMMY(error_print_progname);
//DUMMY(errx);
//DUMMY(ether_aton);
//DUMMY(ether_aton_r);
//DUMMY(ether_ntoa);
//DUMMY(ether_ntoa_r);
DUMMY(eventfd);
DUMMY(eventfd_read);
DUMMY(eventfd_write);
//DUMMY(execl);
//DUMMY(execle);
//DUMMY(execlp);
//DUMMY(execv);
//DUMMY(execve);
//DUMMY(execvp);
//DUMMY(execvpe);
//DUMMY(exit);
//DUMMY(faccessat);
//DUMMY(fake_gmtime_r);
//DUMMY(fake_localtime_r);
//DUMMY(fallocate);
//DUMMY(fallocate64);
//DUMMY(fchdir);
DUMMY(fchmod);
DUMMY(fchmodat);
DUMMY(fchown);
DUMMY(fchownat);
//DUMMY(fclose);
//DUMMY(fcntl);
//DUMMY(fdatasync);
//DUMMY(fdopen);
//DUMMY(fdopendir);
//DUMMY(fdprintf);
//DUMMY(feof);
//DUMMY(feof_unlocked);
//DUMMY(ferror);
//DUMMY(ferror_unlocked);
//DUMMY(fflush);
//DUMMY(ffs);
//DUMMY(fgetc);
//DUMMY(fgetln);
//DUMMY(fgetpos);
//DUMMY(fgets);
//DUMMY(fgetwc);
//DUMMY(fgetws);
//DUMMY(fgetxattr);
//DUMMY(fileno);
//DUMMY(flistxattr);
//DUMMY(flock);
//DUMMY(flockfile);
//DUMMY(fmemopen);
//DUMMY(fnmatch);
//DUMMY(fopen);
//DUMMY(fork);
//DUMMY(forkpty);
//DUMMY(fpathconf);
//DUMMY(fprintf);
//DUMMY(fpurge);
//DUMMY(fputc);
//DUMMY(fputs);
//DUMMY(fputwc);
//DUMMY(fputws);
//DUMMY(fread);
//DUMMY(free);
//DUMMY(free_malloc_leak_info);
//DUMMY(freeaddrinfo);
//DUMMY(freelocale);
//DUMMY(fremovexattr);
//DUMMY(freopen);
//DUMMY(fscanf);
//DUMMY(fseek);
//DUMMY(fseeko);
//DUMMY(fsetpos);
//DUMMY(fsetxattr);
DUMMY(fstat);
DUMMY(fstat64);
//DUMMY(fstatat);
DUMMY(fstatat64);
DUMMY(fstatfs);
DUMMY(fstatfs64);
DUMMY(fstatvfs);
DUMMY(fstatvfs64);
//DUMMY(fsync);
//DUMMY(ftell);
//DUMMY(ftello);
//DUMMY(ftime);
//DUMMY(ftok);
//DUMMY(ftruncate);
//DUMMY(ftruncate64);
//DUMMY(ftrylockfile);
//DUMMY(fts_children);
//DUMMY(fts_close);
//DUMMY(fts_open);
//DUMMY(fts_read);
//DUMMY(fts_set);
//DUMMY(ftw);
//DUMMY(ftw64);
//DUMMY(funlockfile);
//DUMMY(funopen);
//DUMMY(futimens);
//DUMMY(fwide);
//DUMMY(fwprintf);
//DUMMY(fwrite);
//DUMMY(fwscanf);
//DUMMY(gai_strerror);
//DUMMY(get_avphys_pages);
//DUMMY(get_malloc_leak_info);
//DUMMY(get_nprocs);
//DUMMY(get_nprocs_conf);
//DUMMY(get_phys_pages);
//DUMMY(getaddrinfo);
//DUMMY(getauxval);
//DUMMY(getc);
//DUMMY(getc_unlocked);
//DUMMY(getchar);
//DUMMY(getchar_unlocked);
//DUMMY(getcwd);
//DUMMY(getdelim);
//DUMMY(getdents);
//DUMMY(getdtablesize);
//DUMMY(getegid);
//DUMMY(getenv);
//DUMMY(geteuid);
//DUMMY(getgid);
//DUMMY(getgrgid);
//DUMMY(getgrnam);
//DUMMY(getgrouplist);
//DUMMY(getgroups);
//DUMMY(gethostbyaddr);
//DUMMY(gethostbyaddr_r);
//DUMMY(gethostbyname);
//DUMMY(gethostbyname2);
//DUMMY(gethostbyname2_r);
//DUMMY(gethostbyname_r);
//DUMMY(gethostent);
//DUMMY(gethostname);
//DUMMY(getitimer);
//DUMMY(getline);
//DUMMY(getlogin);
//DUMMY(getmntent);
//DUMMY(getmntent_r);
//DUMMY(getnameinfo);
//DUMMY(getnetbyaddr);
//DUMMY(getnetbyname);
//DUMMY(getopt);
//DUMMY(getopt_long);
//DUMMY(getopt_long_only);
//DUMMY(getpagesize);
//DUMMY(getpeername);
//DUMMY(getpgid);
//DUMMY(getpgrp);
//DUMMY(getpid);
//DUMMY(getppid);
DUMMY(getpriority);
//DUMMY(getprogname);
//DUMMY(getprotobyname);
//DUMMY(getprotobynumber);
//DUMMY(getpt);
//DUMMY(getpwnam);
//DUMMY(getpwnam_r);
//DUMMY(getpwuid);
//DUMMY(getpwuid_r);
//DUMMY(getresgid);
//DUMMY(getresuid);
//DUMMY(getrlimit);
//DUMMY(getrlimit64);
//DUMMY(getrusage);
//DUMMY(gets);
//DUMMY(getservbyname);
//DUMMY(getservbyport);
//DUMMY(getservent);
//DUMMY(getsid);
//DUMMY(getsockname);
//DUMMY(getsockopt);
//DUMMY(gettid);
//DUMMY(gettimeofday);
//DUMMY(getuid);
//DUMMY(getusershell);
//DUMMY(getutent);
//DUMMY(getwc);
//DUMMY(getwchar);
//DUMMY(getxattr);
//DUMMY(gmtime);
//DUMMY(gmtime64);
//DUMMY(gmtime64_r);
//DUMMY(gmtime_r);
//DUMMY(grantpt);
//DUMMY(herror);
//DUMMY(hstrerror);
//DUMMY(htonl);
//DUMMY(htons);
//DUMMY(if_indextoname);
//DUMMY(if_nametoindex);
//DUMMY(imaxabs);
//DUMMY(imaxdiv);
//DUMMY(index);
//DUMMY(inet_addr);
//DUMMY(inet_aton);
//DUMMY(inet_lnaof);
//DUMMY(inet_makeaddr);
//DUMMY(inet_netof);
//DUMMY(inet_network);
//DUMMY(inet_nsap_addr);
//DUMMY(inet_nsap_ntoa);
//DUMMY(inet_ntoa);
//DUMMY(inet_ntop);
//DUMMY(inet_pton);
//DUMMY(init_module);
//DUMMY(initgroups);
//DUMMY(initstate);
//DUMMY(inotify_add_watch);
//DUMMY(inotify_init);
//DUMMY(inotify_init1);
//DUMMY(inotify_rm_watch);
//DUMMY(insque);
//DUMMY(ioctl);
//DUMMY(isalnum);
//DUMMY(isalnum_l);
//DUMMY(isalpha);
//DUMMY(isalpha_l);
//DUMMY(isascii);
//DUMMY(isatty);
//DUMMY(isblank);
//DUMMY(isblank_l);
//DUMMY(iscntrl);
//DUMMY(iscntrl_l);
//DUMMY(isdigit);
//DUMMY(isdigit_l);
//DUMMY(isfinite);
//DUMMY(isfinitef);
//DUMMY(isfinitel);
//DUMMY(isgraph);
//DUMMY(isgraph_l);
//DUMMY(isinf);
//DUMMY(isinff);
//DUMMY(isinfl);
//DUMMY(islower);
//DUMMY(islower_l);
//DUMMY(isnan);
//DUMMY(isnanf);
//DUMMY(isnanl);
//DUMMY(isnormal);
//DUMMY(isnormalf);
//DUMMY(isnormall);
//DUMMY(isprint);
//DUMMY(isprint_l);
//DUMMY(ispunct);
//DUMMY(ispunct_l);
//DUMMY(issetugid);
//DUMMY(isspace);
//DUMMY(isspace_l);
//DUMMY(isupper);
//DUMMY(isupper_l);
//DUMMY(iswalnum);
//DUMMY(iswalnum_l);
//DUMMY(iswalpha);
//DUMMY(iswalpha_l);
//DUMMY(iswblank);
//DUMMY(iswblank_l);
//DUMMY(iswcntrl);
//DUMMY(iswcntrl_l);
//DUMMY(iswctype);
//DUMMY(iswctype_l);
//DUMMY(iswdigit);
//DUMMY(iswdigit_l);
//DUMMY(iswgraph);
//DUMMY(iswgraph_l);
//DUMMY(iswlower);
//DUMMY(iswlower_l);
//DUMMY(iswprint);
//DUMMY(iswprint_l);
//DUMMY(iswpunct);
//DUMMY(iswpunct_l);
//DUMMY(iswspace);
//DUMMY(iswspace_l);
//DUMMY(iswupper);
//DUMMY(iswupper_l);
//DUMMY(iswxdigit);
//DUMMY(iswxdigit_l);
//DUMMY(isxdigit);
//DUMMY(isxdigit_l);
//DUMMY(jrand48);
//DUMMY(kill);
//DUMMY(killpg);
//DUMMY(klogctl);
//DUMMY(labs);
//DUMMY(lchown);
//DUMMY(lcong48);
//DUMMY(ldexp);
//DUMMY(ldiv);
//DUMMY(lfind);
//DUMMY(lgetxattr);
//DUMMY(link);
//DUMMY(linkat);
//DUMMY(listen);
//DUMMY(listxattr);
//DUMMY(llabs);
//DUMMY(lldiv);
//DUMMY(llistxattr);
//DUMMY(localeconv);
//DUMMY(localtime);
//DUMMY(localtime64);
//DUMMY(localtime64_r);
//DUMMY(localtime_r);
//DUMMY(login_tty);
//DUMMY(longjmp);
//DUMMY(lrand48);
//DUMMY(lremovexattr);
//DUMMY(lsearch);
//DUMMY(lseek);
//DUMMY(lseek64);
//DUMMY(lsetxattr);
//DUMMY(lstat);
//DUMMY(lstat64);
DUMMY(madvise);
DUMMY(mallinfo);
//DUMMY(malloc);
//DUMMY(malloc_info);
//DUMMY(malloc_usable_size);
//DUMMY(mbrlen);
//DUMMY(mbrtoc16);
//DUMMY(mbrtoc32);
//DUMMY(mbrtowc);
//DUMMY(mbsinit);
//DUMMY(mbsnrtowcs);
//DUMMY(mbsrtowcs);
//DUMMY(mbstowcs);
//DUMMY(mbtowc);
//DUMMY(memalign);
//DUMMY(memccpy);
//DUMMY(memchr);
//DUMMY(memcmp);
//DUMMY(memcpy);
//DUMMY(memmem);
//DUMMY(memmove);
//DUMMY(mempcpy);
//DUMMY(memrchr);
//DUMMY(memset);
//DUMMY(memswap);
//DUMMY(mincore);
//DUMMY(mkdir);
//DUMMY(mkdirat);
//DUMMY(mkdtemp);
//DUMMY(mkfifo);
//DUMMY(mkfifoat);
//DUMMY(mknod);
//DUMMY(mknodat);
//DUMMY(mkostemp);
//DUMMY(mkostemp64);
//DUMMY(mkostemps);
//DUMMY(mkostemps64);
//DUMMY(mkstemp);
//DUMMY(mkstemp64);
//DUMMY(mkstemps);
//DUMMY(mkstemps64);
//DUMMY(mktemp);
//DUMMY(mktime);
//DUMMY(mktime64);
//DUMMY(mktime_tz);
//DUMMY(mlock);
//DUMMY(mlockall);
//DUMMY(mmap);
//DUMMY(mmap64);
//DUMMY(mount);
//DUMMY(mprotect);
//DUMMY(mrand48);
//DUMMY(mremap);
//DUMMY(msync);
//DUMMY(munlock);
//DUMMY(munlockall);
//DUMMY(munmap);
//DUMMY(nanosleep);
//DUMMY(newlocale);
//DUMMY(nftw);
//DUMMY(nftw64);
//DUMMY(nice);
//DUMMY(nrand48);
//DUMMY(ns_format_ttl);
//DUMMY(ns_get16);
//DUMMY(ns_get32);
//DUMMY(ns_initparse);
//DUMMY(ns_makecanon);
//DUMMY(ns_msg_getflag);
//DUMMY(ns_name_compress);
//DUMMY(ns_name_ntol);
//DUMMY(ns_name_ntop);
//DUMMY(ns_name_pack);
//DUMMY(ns_name_pton);
//DUMMY(ns_name_rollback);
//DUMMY(ns_name_skip);
//DUMMY(ns_name_uncompress);
//DUMMY(ns_name_unpack);
//DUMMY(ns_parserr);
//DUMMY(ns_put16);
//DUMMY(ns_put32);
//DUMMY(ns_samename);
//DUMMY(ns_skiprr);
//DUMMY(ns_sprintrr);
//DUMMY(ns_sprintrrf);
//DUMMY(nsdispatch);
//DUMMY(ntohl);
//DUMMY(ntohs);
//DUMMY(open);
//DUMMY(open64);
//DUMMY(open_memstream);
//DUMMY(open_wmemstream);
//DUMMY(openat);
//DUMMY(openat64);
//DUMMY(opendir);
//DUMMY(openlog);
//DUMMY(openpty);
//DUMMY(optarg);
//DUMMY(opterr);
//DUMMY(optind);
//DUMMY(optopt);
//DUMMY(optreset);
//DUMMY(pathconf);
//DUMMY(pause);
//DUMMY(pclose);
//DUMMY(perror);
//DUMMY(personality);
//DUMMY(pipe);
//DUMMY(pipe2);
//DUMMY(poll);
//DUMMY(popen);
//DUMMY(posix_fadvise);
//DUMMY(posix_fadvise64);
//DUMMY(posix_fallocate);
//DUMMY(posix_fallocate64);
//DUMMY(posix_madvise);
//DUMMY(posix_memalign);
//DUMMY(posix_openpt);
//DUMMY(ppoll);
//DUMMY(prctl);
//DUMMY(pread);
//DUMMY(pread64);
//DUMMY(printf);
//DUMMY(prlimit);
//DUMMY(prlimit64);
//DUMMY(process_vm_readv);
//DUMMY(process_vm_writev);
//DUMMY(pselect);
//DUMMY(psiginfo);
//DUMMY(psignal);
//DUMMY(pthread_atfork);
/*DUMMY(pthread_attr_destroy);
DUMMY(pthread_attr_getdetachstate);
DUMMY(pthread_attr_getguardsize);
DUMMY(pthread_attr_getschedparam);
DUMMY(pthread_attr_getschedpolicy);
DUMMY(pthread_attr_getscope);
DUMMY(pthread_attr_getstack);
DUMMY(pthread_attr_getstackaddr);
DUMMY(pthread_attr_getstacksize);
DUMMY(pthread_attr_init);
DUMMY(pthread_attr_setdetachstate);
DUMMY(pthread_attr_setguardsize);
DUMMY(pthread_attr_setschedparam);
DUMMY(pthread_attr_setschedpolicy);
DUMMY(pthread_attr_setscope);
DUMMY(pthread_attr_setstack);
DUMMY(pthread_attr_setstackaddr);
DUMMY(pthread_attr_setstacksize);*/
//DUMMY(pthread_cond_broadcast);
//DUMMY(pthread_cond_destroy);
//DUMMY(pthread_cond_init);
//DUMMY(pthread_cond_signal);
//DUMMY(pthread_cond_timedwait);
//DUMMY(pthread_cond_timedwait_monotonic);
//DUMMY(pthread_cond_timedwait_monotonic_np);
//DUMMY(pthread_cond_timedwait_relative_np);
//DUMMY(pthread_cond_timeout_np);
//DUMMY(pthread_cond_wait);
DUMMY(pthread_condattr_destroy);
DUMMY(pthread_condattr_getclock);
DUMMY(pthread_condattr_getpshared);
DUMMY(pthread_condattr_init);
DUMMY(pthread_condattr_setclock);
DUMMY(pthread_condattr_setpshared);
//DUMMY(pthread_detach);
//DUMMY(pthread_equal);
//DUMMY(pthread_exit);
//DUMMY(pthread_getattr_np);
//DUMMY(pthread_getcpuclockid);
//DUMMY(pthread_getschedparam);
//DUMMY(pthread_getspecific);
DUMMY(pthread_gettid_np);
//DUMMY(pthread_join);
//DUMMY(pthread_key_create);
//DUMMY(pthread_key_delete);
//DUMMY(pthread_kill);
//DUMMY(pthread_mutex_destroy);
//DUMMY(pthread_mutex_init);
//DUMMY(pthread_mutex_lock);
//DUMMY(pthread_mutex_lock_timeout_np);
//DUMMY(pthread_mutex_timedlock);
//DUMMY(pthread_mutex_trylock);
//DUMMY(pthread_mutex_unlock);
//DUMMY(pthread_mutexattr_destroy);
//DUMMY(pthread_mutexattr_getpshared);
//DUMMY(pthread_mutexattr_gettype);
//DUMMY(pthread_mutexattr_init);
//DUMMY(pthread_mutexattr_setpshared);
//DUMMY(pthread_mutexattr_settype);
//DUMMY(pthread_once);
DUMMY(pthread_rwlock_destroy);
DUMMY(pthread_rwlock_init);
DUMMY(pthread_rwlock_rdlock);
DUMMY(pthread_rwlock_timedrdlock);
DUMMY(pthread_rwlock_timedwrlock);
DUMMY(pthread_rwlock_tryrdlock);
DUMMY(pthread_rwlock_trywrlock);
DUMMY(pthread_rwlock_unlock);
DUMMY(pthread_rwlock_wrlock);
DUMMY(pthread_rwlockattr_destroy);
DUMMY(pthread_rwlockattr_getkind_np);
DUMMY(pthread_rwlockattr_getpshared);
DUMMY(pthread_rwlockattr_init);
DUMMY(pthread_rwlockattr_setkind_np);
DUMMY(pthread_rwlockattr_setpshared);
//DUMMY(pthread_self);
//DUMMY(pthread_setname_np);
//DUMMY(pthread_setschedparam);
//DUMMY(pthread_setspecific);
//DUMMY(pthread_sigmask);
DUMMY(ptrace);
//DUMMY(ptsname);
//DUMMY(ptsname_r);
//DUMMY(putc);
//DUMMY(putc_unlocked);
//DUMMY(putchar);
//DUMMY(putchar_unlocked);
//DUMMY(putenv);
//DUMMY(puts);
//DUMMY(pututline);
//DUMMY(putw);
//DUMMY(putwc);
//DUMMY(putwchar);
//DUMMY(pvalloc);
//DUMMY(pwrite);
//DUMMY(pwrite64);
//DUMMY(qsort);
//DUMMY(quick_exit);
//DUMMY(raise);
//DUMMY(rand);
//DUMMY(rand_r);
//DUMMY(random);
//DUMMY(read);
//DUMMY(readahead);
//DUMMY(readdir);
//DUMMY(readdir64);
//DUMMY(readdir64_r);
//DUMMY(readdir_r);
//DUMMY(readlink);
//DUMMY(readlinkat);
//DUMMY(readv);
//DUMMY(realloc);
//DUMMY(realpath);
//DUMMY(reboot);
//DUMMY(recv);
//DUMMY(recvfrom);
//DUMMY(recvmmsg);
//DUMMY(recvmsg);
//DUMMY(regcomp);
//DUMMY(regerror);
//DUMMY(regexec);
//DUMMY(regfree);
//DUMMY(remove);
//DUMMY(removexattr);
//DUMMY(remque);
//DUMMY(rename);
//DUMMY(renameat);
//DUMMY(res_init);
//DUMMY(res_mkquery);
//DUMMY(res_query);
//DUMMY(res_search);
//DUMMY(restore_core_regs);
//DUMMY(rewind);
//DUMMY(rewinddir);
//DUMMY(rmdir);
//DUMMY(sbrk);
//DUMMY(scandir);
//DUMMY(scandir64);
//DUMMY(scanf);
//DUMMY(sched_get_priority_max);
//DUMMY(sched_get_priority_min);
//DUMMY(sched_getaffinity);
//DUMMY(sched_getcpu);
//DUMMY(sched_getparam);
//DUMMY(sched_getscheduler);
//DUMMY(sched_rr_get_interval);
//DUMMY(sched_setaffinity);
//DUMMY(sched_setparam);
//DUMMY(sched_setscheduler);
//DUMMY(sched_yield);
//DUMMY(seed48);
//DUMMY(seekdir);
//DUMMY(select);
//DUMMY(sem_close);
//DUMMY(sem_destroy);
//DUMMY(sem_getvalue);
//DUMMY(sem_init);
//DUMMY(sem_open);
//DUMMY(sem_post);
//DUMMY(sem_timedwait);
//DUMMY(sem_trywait);
//DUMMY(sem_unlink);
//DUMMY(sem_wait);
//DUMMY(send);
//DUMMY(sendfile);
//DUMMY(sendfile64);
//DUMMY(sendmmsg);
//DUMMY(sendmsg);
//DUMMY(sendto);
//DUMMY(setbuf);
//DUMMY(setbuffer);
//DUMMY(setegid);
//DUMMY(setenv);
//DUMMY(seteuid);
//DUMMY(setfsgid);
//DUMMY(setfsuid);
//DUMMY(setgid);
//DUMMY(setgroups);
//DUMMY(sethostname);
//DUMMY(setitimer);
//DUMMY(setjmp);
//DUMMY(setlinebuf);
//DUMMY(setlocale);
//DUMMY(setlogmask);
//DUMMY(setmntent);
//DUMMY(setns);
//DUMMY(setpgid);
//DUMMY(setpgrp);
DUMMY(setpriority);
//DUMMY(setprogname);
//DUMMY(setregid);
//DUMMY(setresgid);
//DUMMY(setresuid);
//DUMMY(setreuid);
//DUMMY(setrlimit);
//DUMMY(setrlimit64);
//DUMMY(setservent);
//DUMMY(setsid);
//DUMMY(setsockopt);
//DUMMY(setstate);
//DUMMY(settimeofday);
//DUMMY(setuid);
//DUMMY(setusershell);
//DUMMY(setutent);
//DUMMY(setvbuf);
//DUMMY(setxattr);
//DUMMY(shutdown);
DUMMY(sigaction);
DUMMY(sigaddset);
DUMMY(sigaltstack);
DUMMY(sigblock);
DUMMY(sigdelset);
DUMMY(sigemptyset);
DUMMY(sigfillset);
DUMMY(siginterrupt);
DUMMY(sigismember);
DUMMY(siglongjmp);
DUMMY(signal);
DUMMY(signalfd);
DUMMY(sigpending);
DUMMY(sigprocmask);
DUMMY(sigqueue);
DUMMY(sigsetjmp);
DUMMY(sigsetmask);
DUMMY(sigsuspend);
DUMMY(sigtimedwait);
DUMMY(sigwait);
DUMMY(sigwaitinfo);
//DUMMY(sleep);
//DUMMY(snprintf);
//DUMMY(socket);
//DUMMY(socketpair);
//DUMMY(splice);
//DUMMY(sprintf);
//DUMMY(srand);
//DUMMY(srand48);
//DUMMY(srandom);
//DUMMY(sscanf);
//DUMMY(stat);
DUMMY(stat64);
DUMMY(statfs);
DUMMY(statfs64);
DUMMY(statvfs);
DUMMY(statvfs64);
//DUMMY(stderr);
//DUMMY(stdin);
//DUMMY(stdout);
//DUMMY(stpcpy);
//DUMMY(stpncpy);
//DUMMY(strcasecmp);
//DUMMY(strcasecmp_l);
//DUMMY(strcasestr);
//DUMMY(strcat);
//DUMMY(strchr);
//DUMMY(strcmp);
//DUMMY(strcoll);
//DUMMY(strcoll_l);
//DUMMY(strcpy);
//DUMMY(strcspn);
//DUMMY(strdup);
//DUMMY(strerror);
//DUMMY(strerror_l);
//DUMMY(strerror_r);
//DUMMY(strftime);
//DUMMY(strftime_l);
//DUMMY(strlcat);
//DUMMY(strlcpy);
//DUMMY(strlen);
//DUMMY(strncasecmp);
//DUMMY(strncasecmp_l);
//DUMMY(strncat);
//DUMMY(strncmp);
//DUMMY(strncpy);
//DUMMY(strndup);
//DUMMY(strnlen);
//DUMMY(strntoimax);
//DUMMY(strntoumax);
//DUMMY(strpbrk);
//DUMMY(strptime);
//DUMMY(strrchr);
//DUMMY(strsep);
//DUMMY(strsignal);
//DUMMY(strspn);
//DUMMY(strstr);
//DUMMY(strtod);
//DUMMY(strtof);
//DUMMY(strtoimax);
//DUMMY(strtok);
//DUMMY(strtok_r);
//DUMMY(strtol);
//DUMMY(strtold);
//DUMMY(strtold_l);
//DUMMY(strtoll);
//DUMMY(strtoll_l);
//DUMMY(strtoq);
//DUMMY(strtotimeval);
//DUMMY(strtoul);
//DUMMY(strtoull);
//DUMMY(strtoull_l);
//DUMMY(strtoumax);
//DUMMY(strtouq);
//DUMMY(strxfrm);
//DUMMY(strxfrm_l);
//DUMMY(swapoff);
//DUMMY(swapon);
//DUMMY(swprintf);
//DUMMY(swscanf);
//DUMMY(symlink);
//DUMMY(symlinkat);
//DUMMY(sync);
//DUMMY(sys_siglist);
//DUMMY(sys_signame);
//DUMMY(syscall);
//DUMMY(sysconf);
//DUMMY(sysinfo);
//DUMMY(syslog);
//DUMMY(system);
//DUMMY(sysv_signal);
//DUMMY(tcdrain);
//DUMMY(tcflow);
//DUMMY(tcflush);
//DUMMY(tcgetattr);
//DUMMY(tcgetpgrp);
//DUMMY(tcgetsid);
//DUMMY(tcsendbreak);
//DUMMY(tcsetattr);
//DUMMY(tcsetpgrp);
//DUMMY(tdelete);
//DUMMY(tdestroy);
//DUMMY(tee);
//DUMMY(telldir);
//DUMMY(tempnam);
//DUMMY(tfind);
DUMMY(tgkill);
//DUMMY(time);
//DUMMY(timegm);
//DUMMY(timegm64);
//DUMMY(timelocal);
//DUMMY(timelocal64);
//DUMMY(timer_create);
//DUMMY(timer_delete);
//DUMMY(timer_getoverrun);
//DUMMY(timer_gettime);
//DUMMY(timer_settime);
//DUMMY(timerfd_create);
//DUMMY(timerfd_gettime);
//DUMMY(timerfd_settime);
//DUMMY(times);
//DUMMY(timezone);
//DUMMY(tkill);
//DUMMY(tmpfile);
//DUMMY(tmpnam);
//DUMMY(toascii);
//DUMMY(tolower);
//DUMMY(tolower_l);
//DUMMY(toupper);
//DUMMY(toupper_l);
//DUMMY(towlower);
//DUMMY(towlower_l);
//DUMMY(towupper);
//DUMMY(towupper_l);
//DUMMY(truncate);
//DUMMY(truncate64);
//DUMMY(tsearch);
//DUMMY(ttyname);
//DUMMY(ttyname_r);
//DUMMY(twalk);
//DUMMY(tzname);
//DUMMY(tzset);
//DUMMY(umask);
//DUMMY(umount);
//DUMMY(umount2);
//DUMMY(uname);
//DUMMY(ungetc);
//DUMMY(ungetwc);
//DUMMY(unlink);
//DUMMY(unlinkat);
//DUMMY(unlockpt);
//DUMMY(unsetenv);
//DUMMY(unshare);
//DUMMY(uselocale);
//DUMMY(usleep);
//DUMMY(utime);
//DUMMY(utimensat);
//DUMMY(utimes);
//DUMMY(utmpname);
//DUMMY(valloc);
//DUMMY(vasprintf);
//DUMMY(vdprintf);
//DUMMY(verr);
//DUMMY(verrx);
//DUMMY(vfdprintf);
//DUMMY(vfork);
//DUMMY(vfprintf);
//DUMMY(vfscanf);
//DUMMY(vfwprintf);
//DUMMY(vfwscanf);
//DUMMY(vmsplice);
//DUMMY(vprintf);
//DUMMY(vscanf);
//DUMMY(vsnprintf);
//DUMMY(vsprintf);
//DUMMY(vsscanf);
//DUMMY(vswprintf);
//DUMMY(vswscanf);
//DUMMY(vsyslog);
//DUMMY(vwarn);
//DUMMY(vwarnx);
//DUMMY(vwprintf);
//DUMMY(vwscanf);
//DUMMY(wait);
//DUMMY(wait3);
//DUMMY(wait4);
//DUMMY(waitid);
//DUMMY(waitpid);
//DUMMY(warn);
//DUMMY(warnx);
//DUMMY(wcpcpy);
//DUMMY(wcpncpy);
//DUMMY(wcrtomb);
//DUMMY(wcscasecmp);
//DUMMY(wcscasecmp_l);
//DUMMY(wcscat);
//DUMMY(wcschr);
//DUMMY(wcscmp);
//DUMMY(wcscoll);
//DUMMY(wcscoll_l);
//DUMMY(wcscpy);
//DUMMY(wcscspn);
//DUMMY(wcsdup);
//DUMMY(wcsftime);
//DUMMY(wcslcat);
//DUMMY(wcslcpy);
//DUMMY(wcslen);
//DUMMY(wcsncasecmp);
//DUMMY(wcsncasecmp_l);
//DUMMY(wcsncat);
//DUMMY(wcsncmp);
//DUMMY(wcsncpy);
//DUMMY(wcsnlen);
//DUMMY(wcsnrtombs);
//DUMMY(wcspbrk);
//DUMMY(wcsrchr);
//DUMMY(wcsrtombs);
//DUMMY(wcsspn);
//DUMMY(wcsstr);
//DUMMY(wcstod);
//DUMMY(wcstof);
//DUMMY(wcstoimax);
//DUMMY(wcstok);
//DUMMY(wcstol);
//DUMMY(wcstold);
//DUMMY(wcstold_l);
//DUMMY(wcstoll);
//DUMMY(wcstoll_l);
//DUMMY(wcstombs);
//DUMMY(wcstoul);
//DUMMY(wcstoull);
//DUMMY(wcstoull_l);
//DUMMY(wcstoumax);
//DUMMY(wcswcs);
//DUMMY(wcswidth);
//DUMMY(wcsxfrm);
//DUMMY(wcsxfrm_l);
//DUMMY(wctob);
//DUMMY(wctomb);
//DUMMY(wctype);
//DUMMY(wctype_l);
//DUMMY(wcwidth);
//DUMMY(wmemchr);
//DUMMY(wmemcmp);
//DUMMY(wmemcpy);
//DUMMY(wmemmove);
//DUMMY(wmempcpy);
//DUMMY(wmemset);
//DUMMY(wprintf);
//DUMMY(write);
//DUMMY(writev);
//DUMMY(wscanf);
