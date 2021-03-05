package com.grantuniversity.dao;


import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;

import com.grantuniversity.model.StudentInfo;
import com.grantuniversity.util.HibernateUtil;

public class RegisterDaoImpl implements RegisterDao {

	@Override
	public boolean register(StudentInfo s) {
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