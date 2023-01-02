  for (int i = 0; i < len; i++)
        {
            if (s[i] == 'S' && s[i + 1] == 'T')
            {
                st++;
            }
            else if (s[i] == 'L' && s[i + 1] == 'T')
            {
                lt++;
            }
        }
        printf("%d %d\n", st, lt);