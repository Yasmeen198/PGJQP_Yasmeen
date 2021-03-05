package com.grantuniversity.util;

import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

public class HibernateUtil {
	private static final SessionFactory sessionfactory;
static
{
	try {
		Configuration config=new Configuration().configure("hibernate.cfg.xml");
		sessionfactory=config.buildSessionFactory();
	}
	catch(Throwable ex)
	{
		System.err.println("Initial sessionfactory creation failed"+ex);
		throw new ExceptionInInitializerError(ex);
		
	}
}
public static SessionFactory getSessionFactory()
{
	return sessionfactory;
	
}
}

