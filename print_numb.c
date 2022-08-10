um % 8) + '0';
                num /= 8;
        }

        if (flags & F_HASH && init_num != 0)
                buffer[i--] = '0';

        i++;

        return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

