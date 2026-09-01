#include <stdio.h>

static inline int read_ll(long long *out) {
    int c = getchar();
    while (c != '-' && (c < '0' || c > '9')) {
        if (c == EOF) return 0;
        c = getchar();
    }
    int neg = 0;
    if (c == '-') { neg = 1; c = getchar(); }
    long long val = 0;
    while (c >= '0' && c <= '9') {
        val = val * 10 + (c - '0');
        c = getchar();
    }
    *out = neg ? -val : val;
    return 1;
}

static char outbuf[1 << 25];
static int outpos = 0;

static inline void write_ll(long long v) {
    char tmp[24];
    int len = 0;
    if (v == 0) {
        outbuf[outpos++] = '0';
        return;
    }
    if (v < 0) {
        outbuf[outpos++] = '-';
        v = -v;
    }
    while (v > 0) {
        tmp[len++] = (char)('0' + (v % 10));
        v /= 10;
    }
    while (len > 0) {
        outbuf[outpos++] = tmp[--len];
    }
}

static long long f[100005];

int main(void) {
    long long T;
    read_ll(&T);

    while (T--) {
        long long n, s;
        read_ll(&n);
        read_ll(&s);

        long long lo = 1, hi = n, k = 0;
        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (mid * (mid + 1) / 2 <= s) {
                k = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (k == 0) {
            outbuf[outpos++] = '-';
            outbuf[outpos++] = '1';
            outbuf[outpos++] = '\n';
            continue;
        }

        long long max_sum = k * n - k * (k - 1) / 2;
        if (max_sum < s) {
            outbuf[outpos++] = '-';
            outbuf[outpos++] = '1';
            outbuf[outpos++] = '\n';
            continue;
        }

        long long extra = s - k * (k + 1) / 2;
        long long prev = n + 1;

        for (long long i = k; i >= 1; i--) {
            long long upper = prev - 1;
            long long room = upper - i;
            long long give = (extra < room) ? extra : room;
            f[i] = i + give;
            extra -= give;
            prev = f[i];
        }

        for (long long i = 1; i <= k; i++) {
            write_ll(f[i]);
            outbuf[outpos++] = (i == k) ? '\n' : ' ';
        }
    }

    fwrite(outbuf, 1, outpos, stdout);
    return 0;
}
