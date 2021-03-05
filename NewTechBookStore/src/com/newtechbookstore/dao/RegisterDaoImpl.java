package com.newtechbookstore.dao;


import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;

import com.newtechbookstore.model.CustomerInfo;
import com.newtechbookstore.util.HibernateUtil;

public class RegisterDaoImpl implements RegisterDao {

	@Override
	public boolean register(CustomerInfo s) {
		SessionFactory sf=HibernateUtil.getSessionFactory();
		try
		{
			Session session=sf.openSession();
			Transaction tx=session.beginTransaction();
			session.save(s);
			session.flush();
			tx.commit();
			return true;
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
			return false;
		}
	}

	

	}