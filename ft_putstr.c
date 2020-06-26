/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 16:02:20 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/24 16:15:06 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_putstr(char *str){
	int i;
	i =0;
	while (str[i]!='\0'){
	ft_putchar(str[i]);
	i++;
	}
}
int main(){
	char *a;
	a = "hi there";
	ft_putstr(a);

	return 0;
}
