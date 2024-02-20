if ((num & 1) != 0)
{
    printf("The first bit is ON.\n");
}
else
{
    printf("The first bit is OFF.\n");
}

// Check if the last bit (bit number 32) is ON or OFF
if ((num & (1 << 31)) != 0)
{
    printf("The last bit is ON.\n");
}
else
{
    printf("The last bit is OFF.\n");
}
