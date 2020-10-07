#include "libasm.h"

int		main(void)
{
	int		result;
	int		fd;
	int		i;
	char	*var;
	char	*aux;

	printf("\033[1;33m|-----| FT_STRLEN |-----|\033[0m\n\n");

	result = ft_strlen("Mateo Tascon Gomez");
	printf("\033[1;33mFT_STRLEN #1: Value = 'Mateo Tascon Gomez' ---> Result: \033[0m<%d>\n", result);
	result = strlen("Mateo Tascon Gomez");
	printf("STRLEN #1: Value = 'Mateo Tascon Gomez' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("");
	printf("\033[1;33mFT_STRLEN #2: Value = '' ---> Result: \033[0m<%d>\n", result);
	result = strlen("");
	printf("STRLEN #2: Value = '' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("42Madrid");
	printf("\033[1;33mFT_STRLEN #3: Value = '42Madrid' ---> Result: \033[0m<%d>\n", result);
	result = strlen("42Madrid");
	printf("STRLEN #3: Value = '42Madrid' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("@#¢$¬/(&=?¿");
	printf("\033[1;33mFT_STRLEN #4: Value = '@#¢$¬/(&=?¿' ---> Result: \033[0m<%d>\n", result);
	result = strlen("@#¢$¬/(&=?¿");
	printf("STRLEN #4: Value = '@#¢$¬/(&=?¿' ---> Result: <%d>\n\n", result);

	result = ft_strlen("Lorem   \t   ipsum");
	printf("\033[1;33mFT_STRLEN #5: Value = 'Lorem   \\t   ipsum' ---> Result: \033[0m<%d>\n", result);
	result = strlen("Lorem   \t   ipsum");
	printf("STRLEN #5: Value = 'Lorem   \\t   ipsum' ---> Result: <%d>\n\n", result);



	printf("\n\033[1;34m|-----| FT_STRCPY |-----|\033[0m\n\n");

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "Mateo Tascon Gomez");
	printf("\033[1;34mFT_STRCPY #1: Value = 'Mateo Tascon Gomez' ---> Result: \033[0m<%s>\n\t\t\t\t\t\t\033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "Mateo Tascon Gomez");
	printf("STRCPY #1: Value = 'Mateo Tascon Gomez' ---> Result: <%s>\n\t\t\t\t\t     return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "42@.Madrid");
	printf("\033[1;34mFT_STRCPY #2: Value = '42@.Madrid' ---> Result: \033[0m<%s>\n\t\t\t\t\t\033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "42@.Madrid");
	printf("STRCPY #2: Value = '42@.Madrid' ---> Result: <%s>\n\t\t\t\t     return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "");
	printf("\033[1;34mFT_STRCPY #3: Value = '' ---> Result: \033[0m<%s>\n\t\t\t      \033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "");
	printf("STRCPY #3: Value = '' ---> Result: <%s>\n\t\t\t   return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "@#¢$¬/(&=?¿");
	printf("\033[1;34mFT_STRCPY #4: Value = '@#¢$¬/(&=?¿' ---> Result: \033[0m<%s>\n\t\t\t\t\t \033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "@#¢$¬/(&=?¿");
	printf("STRCPY #4: Value = '@#¢$¬/(&=?¿' ---> Result: <%s>\n\t\t\t\t      return: <%s>\n\n", var, aux);
	free(var);



	printf("\n\033[1;31m|-----| FT_STRCMP |-----|\033[0m\n\n");

	result = ft_strcmp("mateo", "mateo");
	printf("\033[1;31mFT_STRCMP #1: value 1: 'mateo' - value 2: 'mateo' ---> result: \033[0m<%d>\n", result);
	result = strcmp("mateo", "mateo");
	printf("STRCMP #1: value 1: 'mateo' - value 2: 'mateo' ---> result: <%d>\n\n", result);

	result = ft_strcmp("42", "-42");
	printf("\033[1;31mFT_STRCMP #2: value 1: '42' - value 2: '-42' ---> result: \033[0m<%d>\n", result);
	result = strcmp("42", "-42");
	printf("STRCMP #2: value 1: '42' - value 2: '-42' ---> result: <%d>\n\n", result);

	result = ft_strcmp("Cuarenta y dos", "Cuarenta y dos ");
	printf("\033[1;31mFT_STRCMP #3: value 1: 'Cuarenta y dos' - value 2: 'Cuarenta y dos ' ---> result: \033[0m<%d>\n", result);
	result = strcmp("Cuarenta y dos", "Cuarenta y dos ");
	printf("STRCMP #3: value 1: 'Cuarenta y dos' - value 2: 'Cuarenta y dos ' ---> result: <%d>\n\n", result);

	result = ft_strcmp("&\t@\n#\n$\v?", "&\t@\n#\n$\v¿");
	printf("\033[1;31mFT_STRCMP #4: value 1: '&\\t@\\n#\\n$\\v?' - value 2: '&\\t@\\n#\\n$\\v¿' ---> result: \033[0m<%d>\n", result);
	result = strcmp("&\t@\n#\n$\v?", "&\t@\n#\n$\v¿");
	printf("STRCMP #4: value 1: '&\\t@\\n#\\n$\\v?' - value 2: '&\\t@\\n#\\n$\\v¿' ---> result: <%d>\n\n", result);



	printf("\n\033[1;32m|-----| FT_STRDUP |-----|\033[0m\n\n");

	aux = ft_strdup("mateo");
	printf("\033[1;32mFT_STRDUP #1: value 1: 'mateo' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("mateo");
	printf("STRDUP #1: value 1: 'mateo' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("born2code");
	printf("\033[1;32mFT_STRDUP #2: value 1: 'born2code' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("born2code");
	printf("STRDUP #2: value 1: 'born2code' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("");
	printf("\033[1;32mFT_STRDUP #3: value 1: '' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("");
	printf("STRDUP #3: value 1: '' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\n\0\r\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,");
	printf("\033[1;32mFT_STRDUP #4: value 1: 'dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\\n\\0\\r\\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\n\0\r\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,");
	printf("STRDUP #4: value 1: 'dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\\n\\0\\r\\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,' ---> result: <%s>\n\n", aux);



	printf("\n\033[1;35m|-----| FT_WRITE |-----|\033[0m\n\n");

	printf("\033[1;35mFT_WRITE #1: value 1: 'Mateo' ---> return: \033[0m<%i>\n", result = ft_write(1, "Mateo\n", 6));
	printf("\033[1;35mWRITE #1: value 1: 'Mateo' ---> return: \033[0m<%i>\n", result = write(1, "Mateo\n", 6));

	printf("\n");

	printf("\033[1;35mFT_WRITE #2: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = ft_write(1, "Born2Code\n", 11));
	printf("\033[1;35mWRITE #2: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = write(1, "Born2Code\n", 11));

	printf("\n");

	printf("\033[1;35mFT_WRITE #3: value 1: '' ---> return: \033[0m<%i>\n", result = ft_write(1, "", 3));
	printf("\033[1;35mWRITE #3: value 1: '' ---> return: \033[0m<%i>\n", result = write(1, "", 3));
	
	printf("\n\033[1;35m---> HANDLING ERRNO!\033[0m\n\n");

	printf("\033[1;35mFT_WRITE #4: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = ft_write(1, "Born2Code\n", -11));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");
	printf("\033[1;35mWRITE #4: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = write(1, "Born2Code\n", -11));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");

	printf("\n");

	printf("\033[1;35mFT_WRITE #5: value 1: 'Hello World' ---> return: \033[0m<%i>\n", result = ft_write(10000, "Hello World\n", 12));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");
	printf("\033[1;35mWRITE #5: value 1: 'Hello World' ---> return: \033[0m<%i>\n", result = write(10000, "Hello World\n", 12));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");



	printf("\n\033[1;36m|-----| FT_READ |-----|\033[0m\n\n");

	var = (char *)malloc(14);
	for (i = 0; i < 14; i++)
		var[i] = '\0';

	fd = open("test.txt", O_RDONLY);
	
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(fd, var, 13), var);
	
	close(fd);
	for (i = 0; i < 14; i++)
		var[i] = '\0';
	fd = open("test.txt", O_RDONLY);
	
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(fd, var, 13), var);

	close(fd);

	printf("\n\033[1;36m---> HANDLING ERRNO!\033[0m\n\n");

	for (i = 0; i < 14; i++)
		var[i] = '\0';
	fd = open("test.tx", O_RDONLY);
	
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(fd, var, 13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");

	for (i = 0; i < 14; i++)
		var[i] = '\0';
	fd = open("test.tx", O_RDONLY);
	
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(fd, var, 13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");

	printf("\n");
	for (i = 0; i < 14; i++)
		var[i] = '\0';
	fd = open("test.txt", O_RDONLY);
	
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(fd, var, "something"), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");

	close(fd);
	for (i = 0; i < 14; i++)
		var[i] = '\0';
	fd = open("test.txt", O_RDONLY);
	
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(fd, var, "something"), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");

	close(fd);



	printf("\n\033[1;31m|-----| FT_ATOI_BASE |-----|\033[0m\n\n");

	result = ft_atoi_base("-    +--  -+  +--2a", "0123456789abcdef");
	printf("\033[1;31mFT_ATOI_BASE TEST: ---> result:\033[0m %d\n", result);

	return (0);
}


/*

int	main()
{
	char	*string = "todo bien hasta que";
	char	*string2 = "todo bien hasta que ups";
	int		fd = open("test", O_RDONLY);
	char	*buf = (char*)malloc(20 * sizeof(char));

	printf("STRLEN:\n");
	printf("Mine: %d\n", ft_strlen(string));
	printf("Real: %lu\n\n", strlen(string));

	printf("STRCPY:\n");
	printf("Mine: %s\n", ft_strcpy(buf, string));
	printf("Real: %s\n\n", strcpy(buf, string));

	printf("STRCMP:\n");
	printf("Mine: %s\n", ft_strcmp(string, string2) == 0 ? "Equal" : "Not equal");
	printf("Real: %s\n\n", strcmp(string, string2) == 0 ? "Equal" : "Not equal");

	printf("WRITE:\n");
	ft_write(1, "Mine: ", 6);
	ft_write(1, string, ft_strlen(string));
	printf("\n");
	ft_write(1, "Real: ", 6);
	write(1, string, strlen(string));
	printf("\n\n");

	printf("STRDUP:\n");
	char	*str = ft_strdup(string);
	printf("Mine: %s\n", str);
	free(str);
	str = strdup(string);
	printf("Real: %s\n\n", str);
	free(str);

	printf("READ:\n");
	printf("Reading test file...\n");
	printf("Mine: %d\n", ft_read(fd, buf, 7));
	printf("Reading test file...\n");
	printf("Real: %zd\n\n", read(fd, buf, 7));
	printf("\n----------------TEST COMPLETED----------------\n");
	return (0);
}*/
