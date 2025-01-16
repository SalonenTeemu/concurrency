#ifndef TUNI_HH
#define TUNI_HH

#ifdef __GNUC__
#define TUNI_WARN_OFF()            \
    _Pragma("GCC diagnostic push") \
        _Pragma("GCC diagnostic ignored \"-Wtautological-compare\"")
#define TUNI_WARN_ON() \
    _Pragma("GCC diagnostic pop")
#else
#define TUNI_WARN_OFF()
#define TUNI_WARN_ON()
#endif

#endif  // TUNI_HH
