#ifndef __TVH_WRAPPERS_H__
#define __TVH_WRAPPERS_H__

#if ENABLE_ANDROID
int pthread_mutex_timedlock(pthread_mutex_t *mutex, struct timespec *timeout);
#endif

#endif /* __TVH_WRAPPERS_H__ */
