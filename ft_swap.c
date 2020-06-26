/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:44:44 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 12:47:02 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
	int save = *a;
	*a = *b;
	*b = save;
}
int main(){
	int c = 2, d = 3;
	printf("%d %d\n", c, d);
	ft_swap(&c, &d);
	printf("%d %d", c, d);
}
