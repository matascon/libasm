#include "libasm.h"

int		main(void)
{
	int		result;
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
	printf("%s\n", aux);
	aux = strdup("mateo");
	printf("%s\n", aux);



	printf("\n\033[1;32m|-----| FT_WRITE |-----|\033[0m\n\n");

	aux = ft_strdup("mateo");
	printf("%s\n", aux);
	aux = strdup("mateo");
	printf("%s\n", aux);
	return (0);
}
